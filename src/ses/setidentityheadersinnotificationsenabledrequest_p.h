// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDREQUEST_P_H
#define QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "setidentityheadersinnotificationsenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityHeadersInNotificationsEnabledRequest;

class SetIdentityHeadersInNotificationsEnabledRequestPrivate : public SesRequestPrivate {

public:
    SetIdentityHeadersInNotificationsEnabledRequestPrivate(const SesRequest::Action action,
                                   SetIdentityHeadersInNotificationsEnabledRequest * const q);
    SetIdentityHeadersInNotificationsEnabledRequestPrivate(const SetIdentityHeadersInNotificationsEnabledRequestPrivate &other,
                                   SetIdentityHeadersInNotificationsEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityHeadersInNotificationsEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
