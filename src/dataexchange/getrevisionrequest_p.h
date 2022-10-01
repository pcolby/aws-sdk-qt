// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVISIONREQUEST_P_H
#define QTAWS_GETREVISIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "getrevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class GetRevisionRequest;

class GetRevisionRequestPrivate : public DataExchangeRequestPrivate {

public:
    GetRevisionRequestPrivate(const DataExchangeRequest::Action action,
                                   GetRevisionRequest * const q);
    GetRevisionRequestPrivate(const GetRevisionRequestPrivate &other,
                                   GetRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
