// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREVISIONREQUEST_P_H
#define QTAWS_DELETEREVISIONREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "deleterevisionrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteRevisionRequest;

class DeleteRevisionRequestPrivate : public DataExchangeRequestPrivate {

public:
    DeleteRevisionRequestPrivate(const DataExchangeRequest::Action action,
                                   DeleteRevisionRequest * const q);
    DeleteRevisionRequestPrivate(const DeleteRevisionRequestPrivate &other,
                                   DeleteRevisionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
