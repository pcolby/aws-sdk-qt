// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPESRESPONSE_H
#define QTAWS_DESCRIBETAPESRESPONSE_H

#include "storagegatewayresponse.h"
#include "describetapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeTapesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeTapesResponse(const DescribeTapesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTapesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTapesResponse)
    Q_DISABLE_COPY(DescribeTapesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
