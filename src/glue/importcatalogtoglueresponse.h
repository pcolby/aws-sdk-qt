// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCATALOGTOGLUERESPONSE_H
#define QTAWS_IMPORTCATALOGTOGLUERESPONSE_H

#include "glueresponse.h"
#include "importcatalogtogluerequest.h"

namespace QtAws {
namespace Glue {

class ImportCatalogToGlueResponsePrivate;

class QTAWSGLUE_EXPORT ImportCatalogToGlueResponse : public GlueResponse {
    Q_OBJECT

public:
    ImportCatalogToGlueResponse(const ImportCatalogToGlueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportCatalogToGlueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCatalogToGlueResponse)
    Q_DISABLE_COPY(ImportCatalogToGlueResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
