// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWREQUEST_P_H
#define QTAWS_UPDATEFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "updateflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowRequest;

class UpdateFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    UpdateFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   UpdateFlowRequest * const q);
    UpdateFlowRequestPrivate(const UpdateFlowRequestPrivate &other,
                                   UpdateFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
