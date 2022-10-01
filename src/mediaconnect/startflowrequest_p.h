// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLOWREQUEST_P_H
#define QTAWS_STARTFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "startflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class StartFlowRequest;

class StartFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    StartFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   StartFlowRequest * const q);
    StartFlowRequestPrivate(const StartFlowRequestPrivate &other,
                                   StartFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
