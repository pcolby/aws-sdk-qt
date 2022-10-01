// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYGROUPREQUEST_P_H
#define QTAWS_DELETEGATEWAYGROUPREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletegatewaygrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteGatewayGroupRequest;

class DeleteGatewayGroupRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteGatewayGroupRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteGatewayGroupRequest * const q);
    DeleteGatewayGroupRequestPrivate(const DeleteGatewayGroupRequestPrivate &other,
                                   DeleteGatewayGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
