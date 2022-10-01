// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDREQUEST_P_H
#define QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "setidentityfeedbackforwardingenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityFeedbackForwardingEnabledRequest;

class SetIdentityFeedbackForwardingEnabledRequestPrivate : public SesRequestPrivate {

public:
    SetIdentityFeedbackForwardingEnabledRequestPrivate(const SesRequest::Action action,
                                   SetIdentityFeedbackForwardingEnabledRequest * const q);
    SetIdentityFeedbackForwardingEnabledRequestPrivate(const SetIdentityFeedbackForwardingEnabledRequestPrivate &other,
                                   SetIdentityFeedbackForwardingEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityFeedbackForwardingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
