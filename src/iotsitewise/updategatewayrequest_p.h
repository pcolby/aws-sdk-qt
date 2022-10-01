// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYREQUEST_P_H
#define QTAWS_UPDATEGATEWAYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updategatewayrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayRequest;

class UpdateGatewayRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateGatewayRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateGatewayRequest * const q);
    UpdateGatewayRequestPrivate(const UpdateGatewayRequestPrivate &other,
                                   UpdateGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
