// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSREQUEST_P_H
#define QTAWS_PUTUSERSREQUEST_P_H

#include "personalizeeventsrequest_p.h"
#include "putusersrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutUsersRequest;

class PutUsersRequestPrivate : public PersonalizeEventsRequestPrivate {

public:
    PutUsersRequestPrivate(const PersonalizeEventsRequest::Action action,
                                   PutUsersRequest * const q);
    PutUsersRequestPrivate(const PutUsersRequestPrivate &other,
                                   PutUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutUsersRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
