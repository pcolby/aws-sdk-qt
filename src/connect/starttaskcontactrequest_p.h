// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKCONTACTREQUEST_P_H
#define QTAWS_STARTTASKCONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "starttaskcontactrequest.h"

namespace QtAws {
namespace Connect {

class StartTaskContactRequest;

class StartTaskContactRequestPrivate : public ConnectRequestPrivate {

public:
    StartTaskContactRequestPrivate(const ConnectRequest::Action action,
                                   StartTaskContactRequest * const q);
    StartTaskContactRequestPrivate(const StartTaskContactRequestPrivate &other,
                                   StartTaskContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTaskContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
