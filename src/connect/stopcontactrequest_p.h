// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTREQUEST_P_H
#define QTAWS_STOPCONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "stopcontactrequest.h"

namespace QtAws {
namespace Connect {

class StopContactRequest;

class StopContactRequestPrivate : public ConnectRequestPrivate {

public:
    StopContactRequestPrivate(const ConnectRequest::Action action,
                                   StopContactRequest * const q);
    StopContactRequestPrivate(const StopContactRequestPrivate &other,
                                   StopContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
