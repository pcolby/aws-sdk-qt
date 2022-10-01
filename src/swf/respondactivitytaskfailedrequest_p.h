// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKFAILEDREQUEST_P_H
#define QTAWS_RESPONDACTIVITYTASKFAILEDREQUEST_P_H

#include "swfrequest_p.h"
#include "respondactivitytaskfailedrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskFailedRequest;

class RespondActivityTaskFailedRequestPrivate : public SwfRequestPrivate {

public:
    RespondActivityTaskFailedRequestPrivate(const SwfRequest::Action action,
                                   RespondActivityTaskFailedRequest * const q);
    RespondActivityTaskFailedRequestPrivate(const RespondActivityTaskFailedRequestPrivate &other,
                                   RespondActivityTaskFailedRequest * const q);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskFailedRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
