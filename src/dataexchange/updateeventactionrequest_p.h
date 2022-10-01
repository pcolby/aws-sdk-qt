// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTACTIONREQUEST_P_H
#define QTAWS_UPDATEEVENTACTIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "updateeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateEventActionRequest;

class UpdateEventActionRequestPrivate : public DataExchangeRequestPrivate {

public:
    UpdateEventActionRequestPrivate(const DataExchangeRequest::Action action,
                                   UpdateEventActionRequest * const q);
    UpdateEventActionRequestPrivate(const UpdateEventActionRequestPrivate &other,
                                   UpdateEventActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
