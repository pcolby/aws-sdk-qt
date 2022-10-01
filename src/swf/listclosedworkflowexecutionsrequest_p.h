// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSREQUEST_P_H
#define QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSREQUEST_P_H

#include "swfrequest_p.h"
#include "listclosedworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class ListClosedWorkflowExecutionsRequest;

class ListClosedWorkflowExecutionsRequestPrivate : public SwfRequestPrivate {

public:
    ListClosedWorkflowExecutionsRequestPrivate(const SwfRequest::Action action,
                                   ListClosedWorkflowExecutionsRequest * const q);
    ListClosedWorkflowExecutionsRequestPrivate(const ListClosedWorkflowExecutionsRequestPrivate &other,
                                   ListClosedWorkflowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListClosedWorkflowExecutionsRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
