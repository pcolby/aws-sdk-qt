// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDDECISIONTASKCOMPLETEDREQUEST_P_H
#define QTAWS_RESPONDDECISIONTASKCOMPLETEDREQUEST_P_H

#include "swfrequest_p.h"
#include "responddecisiontaskcompletedrequest.h"

namespace QtAws {
namespace Swf {

class RespondDecisionTaskCompletedRequest;

class RespondDecisionTaskCompletedRequestPrivate : public SwfRequestPrivate {

public:
    RespondDecisionTaskCompletedRequestPrivate(const SwfRequest::Action action,
                                   RespondDecisionTaskCompletedRequest * const q);
    RespondDecisionTaskCompletedRequestPrivate(const RespondDecisionTaskCompletedRequestPrivate &other,
                                   RespondDecisionTaskCompletedRequest * const q);

private:
    Q_DECLARE_PUBLIC(RespondDecisionTaskCompletedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
