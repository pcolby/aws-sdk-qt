// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWVPCINTERFACEREQUEST_P_H
#define QTAWS_REMOVEFLOWVPCINTERFACEREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "removeflowvpcinterfacerequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowVpcInterfaceRequest;

class RemoveFlowVpcInterfaceRequestPrivate : public MediaConnectRequestPrivate {

public:
    RemoveFlowVpcInterfaceRequestPrivate(const MediaConnectRequest::Action action,
                                   RemoveFlowVpcInterfaceRequest * const q);
    RemoveFlowVpcInterfaceRequestPrivate(const RemoveFlowVpcInterfaceRequestPrivate &other,
                                   RemoveFlowVpcInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFlowVpcInterfaceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
