// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGIMPORTSTATUSRESPONSE_H
#define QTAWS_GETCATALOGIMPORTSTATUSRESPONSE_H

#include "glueresponse.h"
#include "getcatalogimportstatusrequest.h"

namespace QtAws {
namespace Glue {

class GetCatalogImportStatusResponsePrivate;

class QTAWSGLUE_EXPORT GetCatalogImportStatusResponse : public GlueResponse {
    Q_OBJECT

public:
    GetCatalogImportStatusResponse(const GetCatalogImportStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCatalogImportStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCatalogImportStatusResponse)
    Q_DISABLE_COPY(GetCatalogImportStatusResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
