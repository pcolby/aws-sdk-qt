// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYCATALOGDATARESPONSE_H
#define QTAWS_GETREGISTRYCATALOGDATARESPONSE_H

#include "ecrpublicresponse.h"
#include "getregistrycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRegistryCatalogDataResponsePrivate;

class QTAWSECRPUBLIC_EXPORT GetRegistryCatalogDataResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    GetRegistryCatalogDataResponse(const GetRegistryCatalogDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegistryCatalogDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryCatalogDataResponse)
    Q_DISABLE_COPY(GetRegistryCatalogDataResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
