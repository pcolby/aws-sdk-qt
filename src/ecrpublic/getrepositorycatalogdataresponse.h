// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYCATALOGDATARESPONSE_H
#define QTAWS_GETREPOSITORYCATALOGDATARESPONSE_H

#include "ecrpublicresponse.h"
#include "getrepositorycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryCatalogDataResponsePrivate;

class QTAWSECRPUBLIC_EXPORT GetRepositoryCatalogDataResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    GetRepositoryCatalogDataResponse(const GetRepositoryCatalogDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryCatalogDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryCatalogDataResponse)
    Q_DISABLE_COPY(GetRepositoryCatalogDataResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
