// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGIMPORTSTATUSREQUEST_H
#define QTAWS_GETCATALOGIMPORTSTATUSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetCatalogImportStatusRequestPrivate;

class QTAWSGLUE_EXPORT GetCatalogImportStatusRequest : public GlueRequest {

public:
    GetCatalogImportStatusRequest(const GetCatalogImportStatusRequest &other);
    GetCatalogImportStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCatalogImportStatusRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
