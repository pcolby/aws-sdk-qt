// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWREQUEST_P_H
#define QTAWS_STOPFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "stopflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class StopFlowRequest;

class StopFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    StopFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   StopFlowRequest * const q);
    StopFlowRequestPrivate(const StopFlowRequestPrivate &other,
                                   StopFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
