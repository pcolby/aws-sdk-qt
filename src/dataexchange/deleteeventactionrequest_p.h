// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTACTIONREQUEST_P_H
#define QTAWS_DELETEEVENTACTIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "deleteeventactionrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteEventActionRequest;

class DeleteEventActionRequestPrivate : public DataExchangeRequestPrivate {

public:
    DeleteEventActionRequestPrivate(const DataExchangeRequest::Action action,
                                   DeleteEventActionRequest * const q);
    DeleteEventActionRequestPrivate(const DeleteEventActionRequestPrivate &other,
                                   DeleteEventActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
