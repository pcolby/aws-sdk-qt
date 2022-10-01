// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTACTIONREQUEST_P_H
#define QTAWS_CREATEEVENTACTIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "createeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateEventActionRequest;

class CreateEventActionRequestPrivate : public DataExchangeRequestPrivate {

public:
    CreateEventActionRequestPrivate(const DataExchangeRequest::Action action,
                                   CreateEventActionRequest * const q);
    CreateEventActionRequestPrivate(const CreateEventActionRequestPrivate &other,
                                   CreateEventActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
