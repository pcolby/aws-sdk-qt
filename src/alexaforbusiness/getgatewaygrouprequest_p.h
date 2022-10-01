// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYGROUPREQUEST_P_H
#define QTAWS_GETGATEWAYGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getgatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayGroupRequest;

class GetGatewayGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetGatewayGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetGatewayGroupRequest * const q);
    GetGatewayGroupRequestPrivate(const GetGatewayGroupRequestPrivate &other,
                                   GetGatewayGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
