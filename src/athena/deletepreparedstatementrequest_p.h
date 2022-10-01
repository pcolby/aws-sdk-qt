// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREPAREDSTATEMENTREQUEST_P_H
#define QTAWS_DELETEPREPAREDSTATEMENTREQUEST_P_H

#include "athenarequest_p.h"
#include "deletepreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class DeletePreparedStatementRequest;

class DeletePreparedStatementRequestPrivate : public AthenaRequestPrivate {

public:
    DeletePreparedStatementRequestPrivate(const AthenaRequest::Action action,
                                   DeletePreparedStatementRequest * const q);
    DeletePreparedStatementRequestPrivate(const DeletePreparedStatementRequestPrivate &other,
                                   DeletePreparedStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
