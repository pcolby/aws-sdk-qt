// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREVISIONREQUEST_P_H
#define QTAWS_CREATEREVISIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "createrevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateRevisionRequest;

class CreateRevisionRequestPrivate : public DataExchangeRequestPrivate {

public:
    CreateRevisionRequestPrivate(const DataExchangeRequest::Action action,
                                   CreateRevisionRequest * const q);
    CreateRevisionRequestPrivate(const CreateRevisionRequestPrivate &other,
                                   CreateRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
