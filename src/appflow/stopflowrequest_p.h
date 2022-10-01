// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWREQUEST_P_H
#define QTAWS_STOPFLOWREQUEST_P_H

#include "appflowrequest_p.h"
#include "stopflowrequest.h"

namespace QtAws {
namespace Appflow {

class StopFlowRequest;

class StopFlowRequestPrivate : public AppflowRequestPrivate {

public:
    StopFlowRequestPrivate(const AppflowRequest::Action action,
                                   StopFlowRequest * const q);
    StopFlowRequestPrivate(const StopFlowRequestPrivate &other,
                                   StopFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
