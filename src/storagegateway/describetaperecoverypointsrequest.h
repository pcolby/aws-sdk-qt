// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPERECOVERYPOINTSREQUEST_H
#define QTAWS_DESCRIBETAPERECOVERYPOINTSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapeRecoveryPointsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeTapeRecoveryPointsRequest : public StorageGatewayRequest {

public:
    DescribeTapeRecoveryPointsRequest(const DescribeTapeRecoveryPointsRequest &other);
    DescribeTapeRecoveryPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTapeRecoveryPointsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
