// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCANCELEDREQUEST_P_H
#define QTAWS_RESPONDACTIVITYTASKCANCELEDREQUEST_P_H

#include "swfrequest_p.h"
#include "respondactivitytaskcanceledrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCanceledRequest;

class RespondActivityTaskCanceledRequestPrivate : public SwfRequestPrivate {

public:
    RespondActivityTaskCanceledRequestPrivate(const SwfRequest::Action action,
                                   RespondActivityTaskCanceledRequest * const q);
    RespondActivityTaskCanceledRequestPrivate(const RespondActivityTaskCanceledRequestPrivate &other,
                                   RespondActivityTaskCanceledRequest * const q);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskCanceledRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
