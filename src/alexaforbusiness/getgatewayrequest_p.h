// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYREQUEST_P_H
#define QTAWS_GETGATEWAYREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getgatewayrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayRequest;

class GetGatewayRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetGatewayRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetGatewayRequest * const q);
    GetGatewayRequestPrivate(const GetGatewayRequestPrivate &other,
                                   GetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGatewayRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
