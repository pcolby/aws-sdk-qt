// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTACTIONREQUEST_P_H
#define QTAWS_GETEVENTACTIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "geteventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class GetEventActionRequest;

class GetEventActionRequestPrivate : public DataExchangeRequestPrivate {

public:
    GetEventActionRequestPrivate(const DataExchangeRequest::Action action,
                                   GetEventActionRequest * const q);
    GetEventActionRequestPrivate(const GetEventActionRequestPrivate &other,
                                   GetEventActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
