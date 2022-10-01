// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVISIONREQUEST_P_H
#define QTAWS_UPDATEREVISIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "updaterevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateRevisionRequest;

class UpdateRevisionRequestPrivate : public DataExchangeRequestPrivate {

public:
    UpdateRevisionRequestPrivate(const DataExchangeRequest::Action action,
                                   UpdateRevisionRequest * const q);
    UpdateRevisionRequestPrivate(const UpdateRevisionRequestPrivate &other,
                                   UpdateRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
