// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAVAILABILITYMONITORTESTREQUEST_H
#define QTAWS_STARTAVAILABILITYMONITORTESTREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartAvailabilityMonitorTestRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT StartAvailabilityMonitorTestRequest : public StorageGatewayRequest {

public:
    StartAvailabilityMonitorTestRequest(const StartAvailabilityMonitorTestRequest &other);
    StartAvailabilityMonitorTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAvailabilityMonitorTestRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
