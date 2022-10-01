// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEREVISIONREQUEST_P_H
#define QTAWS_REVOKEREVISIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "revokerevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class RevokeRevisionRequest;

class RevokeRevisionRequestPrivate : public DataExchangeRequestPrivate {

public:
    RevokeRevisionRequestPrivate(const DataExchangeRequest::Action action,
                                   RevokeRevisionRequest * const q);
    RevokeRevisionRequestPrivate(const RevokeRevisionRequestPrivate &other,
                                   RevokeRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
