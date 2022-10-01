// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYREQUEST_P_H
#define QTAWS_CREATEGATEWAYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "creategatewayrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateGatewayRequest;

class CreateGatewayRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateGatewayRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateGatewayRequest * const q);
    CreateGatewayRequestPrivate(const CreateGatewayRequestPrivate &other,
                                   CreateGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
