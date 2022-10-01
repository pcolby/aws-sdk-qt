// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYGROUPREQUEST_P_H
#define QTAWS_CREATEGATEWAYGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "creategatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateGatewayGroupRequest;

class CreateGatewayGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateGatewayGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateGatewayGroupRequest * const q);
    CreateGatewayGroupRequestPrivate(const CreateGatewayGroupRequestPrivate &other,
                                   CreateGatewayGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
