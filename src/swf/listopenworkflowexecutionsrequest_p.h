// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENWORKFLOWEXECUTIONSREQUEST_P_H
#define QTAWS_LISTOPENWORKFLOWEXECUTIONSREQUEST_P_H

#include "swfrequest_p.h"
#include "listopenworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class ListOpenWorkflowExecutionsRequest;

class ListOpenWorkflowExecutionsRequestPrivate : public SwfRequestPrivate {

public:
    ListOpenWorkflowExecutionsRequestPrivate(const SwfRequest::Action action,
                                   ListOpenWorkflowExecutionsRequest * const q);
    ListOpenWorkflowExecutionsRequestPrivate(const ListOpenWorkflowExecutionsRequestPrivate &other,
                                   ListOpenWorkflowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpenWorkflowExecutionsRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
