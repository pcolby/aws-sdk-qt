// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCATALOGTOGLUEREQUEST_H
#define QTAWS_IMPORTCATALOGTOGLUEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ImportCatalogToGlueRequestPrivate;

class QTAWSGLUE_EXPORT ImportCatalogToGlueRequest : public GlueRequest {

public:
    ImportCatalogToGlueRequest(const ImportCatalogToGlueRequest &other);
    ImportCatalogToGlueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCatalogToGlueRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
