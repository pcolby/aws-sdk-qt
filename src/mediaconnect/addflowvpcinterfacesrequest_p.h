// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWVPCINTERFACESREQUEST_P_H
#define QTAWS_ADDFLOWVPCINTERFACESREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "addflowvpcinterfacesrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowVpcInterfacesRequest;

class AddFlowVpcInterfacesRequestPrivate : public MediaConnectRequestPrivate {

public:
    AddFlowVpcInterfacesRequestPrivate(const MediaConnectRequest::Action action,
                                   AddFlowVpcInterfacesRequest * const q);
    AddFlowVpcInterfacesRequestPrivate(const AddFlowVpcInterfacesRequestPrivate &other,
                                   AddFlowVpcInterfacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddFlowVpcInterfacesRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
