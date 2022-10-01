// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYCATALOGDATARESPONSE_H
#define QTAWS_PUTREGISTRYCATALOGDATARESPONSE_H

#include "ecrpublicresponse.h"
#include "putregistrycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRegistryCatalogDataResponsePrivate;

class QTAWSECRPUBLIC_EXPORT PutRegistryCatalogDataResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    PutRegistryCatalogDataResponse(const PutRegistryCatalogDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRegistryCatalogDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryCatalogDataResponse)
    Q_DISABLE_COPY(PutRegistryCatalogDataResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
