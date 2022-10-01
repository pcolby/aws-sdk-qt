// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPERECOVERYPOINTSRESPONSE_H
#define QTAWS_DESCRIBETAPERECOVERYPOINTSRESPONSE_H

#include "storagegatewayresponse.h"
#include "describetaperecoverypointsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeRecoveryPointsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeTapeRecoveryPointsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeTapeRecoveryPointsResponse(const DescribeTapeRecoveryPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTapeRecoveryPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTapeRecoveryPointsResponse)
    Q_DISABLE_COPY(DescribeTapeRecoveryPointsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
