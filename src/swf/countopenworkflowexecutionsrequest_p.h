// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTOPENWORKFLOWEXECUTIONSREQUEST_P_H
#define QTAWS_COUNTOPENWORKFLOWEXECUTIONSREQUEST_P_H

#include "swfrequest_p.h"
#include "countopenworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class CountOpenWorkflowExecutionsRequest;

class CountOpenWorkflowExecutionsRequestPrivate : public SwfRequestPrivate {

public:
    CountOpenWorkflowExecutionsRequestPrivate(const SwfRequest::Action action,
                                   CountOpenWorkflowExecutionsRequest * const q);
    CountOpenWorkflowExecutionsRequestPrivate(const CountOpenWorkflowExecutionsRequestPrivate &other,
                                   CountOpenWorkflowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CountOpenWorkflowExecutionsRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
