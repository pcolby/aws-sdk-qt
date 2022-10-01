// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLOWREQUEST_P_H
#define QTAWS_STARTFLOWREQUEST_P_H

#include "appflowrequest_p.h"
#include "startflowrequest.h"

namespace QtAws {
namespace Appflow {

class StartFlowRequest;

class StartFlowRequestPrivate : public AppflowRequestPrivate {

public:
    StartFlowRequestPrivate(const AppflowRequest::Action action,
                                   StartFlowRequest * const q);
    StartFlowRequestPrivate(const StartFlowRequestPrivate &other,
                                   StartFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
