// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCOMPLETEDREQUEST_P_H
#define QTAWS_RESPONDACTIVITYTASKCOMPLETEDREQUEST_P_H

#include "swfrequest_p.h"
#include "respondactivitytaskcompletedrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCompletedRequest;

class RespondActivityTaskCompletedRequestPrivate : public SwfRequestPrivate {

public:
    RespondActivityTaskCompletedRequestPrivate(const SwfRequest::Action action,
                                   RespondActivityTaskCompletedRequest * const q);
    RespondActivityTaskCompletedRequestPrivate(const RespondActivityTaskCompletedRequestPrivate &other,
                                   RespondActivityTaskCompletedRequest * const q);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskCompletedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
