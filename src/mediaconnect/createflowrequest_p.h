// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWREQUEST_P_H
#define QTAWS_CREATEFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "createflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class CreateFlowRequest;

class CreateFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    CreateFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   CreateFlowRequest * const q);
    CreateFlowRequestPrivate(const CreateFlowRequestPrivate &other,
                                   CreateFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
