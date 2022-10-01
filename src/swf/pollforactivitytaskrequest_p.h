// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORACTIVITYTASKREQUEST_P_H
#define QTAWS_POLLFORACTIVITYTASKREQUEST_P_H

#include "swfrequest_p.h"
#include "pollforactivitytaskrequest.h"

namespace QtAws {
namespace Swf {

class PollForActivityTaskRequest;

class PollForActivityTaskRequestPrivate : public SwfRequestPrivate {

public:
    PollForActivityTaskRequestPrivate(const SwfRequest::Action action,
                                   PollForActivityTaskRequest * const q);
    PollForActivityTaskRequestPrivate(const PollForActivityTaskRequestPrivate &other,
                                   PollForActivityTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(PollForActivityTaskRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
