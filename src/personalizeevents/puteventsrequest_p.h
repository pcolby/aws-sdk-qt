// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_P_H
#define QTAWS_PUTEVENTSREQUEST_P_H

#include "personalizeeventsrequest_p.h"
#include "puteventsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutEventsRequest;

class PutEventsRequestPrivate : public PersonalizeEventsRequestPrivate {

public:
    PutEventsRequestPrivate(const PersonalizeEventsRequest::Action action,
                                   PutEventsRequest * const q);
    PutEventsRequestPrivate(const PutEventsRequestPrivate &other,
                                   PutEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
