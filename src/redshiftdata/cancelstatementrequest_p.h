// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTATEMENTREQUEST_P_H
#define QTAWS_CANCELSTATEMENTREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "cancelstatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class CancelStatementRequest;

class CancelStatementRequestPrivate : public RedshiftDataRequestPrivate {

public:
    CancelStatementRequestPrivate(const RedshiftDataRequest::Action action,
                                   CancelStatementRequest * const q);
    CancelStatementRequestPrivate(const CancelStatementRequestPrivate &other,
                                   CancelStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
