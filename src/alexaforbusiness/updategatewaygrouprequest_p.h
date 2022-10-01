// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYGROUPREQUEST_P_H
#define QTAWS_UPDATEGATEWAYGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updategatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayGroupRequest;

class UpdateGatewayGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateGatewayGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateGatewayGroupRequest * const q);
    UpdateGatewayGroupRequestPrivate(const UpdateGatewayGroupRequestPrivate &other,
                                   UpdateGatewayGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
