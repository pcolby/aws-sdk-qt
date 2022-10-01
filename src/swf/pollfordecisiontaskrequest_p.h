// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORDECISIONTASKREQUEST_P_H
#define QTAWS_POLLFORDECISIONTASKREQUEST_P_H

#include "swfrequest_p.h"
#include "pollfordecisiontaskrequest.h"

namespace QtAws {
namespace Swf {

class PollForDecisionTaskRequest;

class PollForDecisionTaskRequestPrivate : public SwfRequestPrivate {

public:
    PollForDecisionTaskRequestPrivate(const SwfRequest::Action action,
                                   PollForDecisionTaskRequest * const q);
    PollForDecisionTaskRequestPrivate(const PollForDecisionTaskRequestPrivate &other,
                                   PollForDecisionTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(PollForDecisionTaskRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
