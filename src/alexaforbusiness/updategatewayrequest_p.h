// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYREQUEST_P_H
#define QTAWS_UPDATEGATEWAYREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updategatewayrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayRequest;

class UpdateGatewayRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateGatewayRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateGatewayRequest * const q);
    UpdateGatewayRequestPrivate(const UpdateGatewayRequestPrivate &other,
                                   UpdateGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
