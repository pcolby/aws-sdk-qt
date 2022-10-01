// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMSREQUEST_P_H
#define QTAWS_PUTITEMSREQUEST_P_H

#include "personalizeeventsrequest_p.h"
#include "putitemsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutItemsRequest;

class PutItemsRequestPrivate : public PersonalizeEventsRequestPrivate {

public:
    PutItemsRequestPrivate(const PersonalizeEventsRequest::Action action,
                                   PutItemsRequest * const q);
    PutItemsRequestPrivate(const PutItemsRequestPrivate &other,
                                   PutItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutItemsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
