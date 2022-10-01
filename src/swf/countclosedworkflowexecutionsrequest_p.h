// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSREQUEST_P_H
#define QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSREQUEST_P_H

#include "swfrequest_p.h"
#include "countclosedworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class CountClosedWorkflowExecutionsRequest;

class CountClosedWorkflowExecutionsRequestPrivate : public SwfRequestPrivate {

public:
    CountClosedWorkflowExecutionsRequestPrivate(const SwfRequest::Action action,
                                   CountClosedWorkflowExecutionsRequest * const q);
    CountClosedWorkflowExecutionsRequestPrivate(const CountClosedWorkflowExecutionsRequestPrivate &other,
                                   CountClosedWorkflowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CountClosedWorkflowExecutionsRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
