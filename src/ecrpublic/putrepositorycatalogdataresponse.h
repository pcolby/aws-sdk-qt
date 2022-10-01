// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYCATALOGDATARESPONSE_H
#define QTAWS_PUTREPOSITORYCATALOGDATARESPONSE_H

#include "ecrpublicresponse.h"
#include "putrepositorycatalogdatarequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRepositoryCatalogDataResponsePrivate;

class QTAWSECRPUBLIC_EXPORT PutRepositoryCatalogDataResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    PutRepositoryCatalogDataResponse(const PutRepositoryCatalogDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRepositoryCatalogDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRepositoryCatalogDataResponse)
    Q_DISABLE_COPY(PutRepositoryCatalogDataResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
