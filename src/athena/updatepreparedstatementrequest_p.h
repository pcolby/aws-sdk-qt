// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPREPAREDSTATEMENTREQUEST_P_H
#define QTAWS_UPDATEPREPAREDSTATEMENTREQUEST_P_H

#include "athenarequest_p.h"
#include "updatepreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class UpdatePreparedStatementRequest;

class UpdatePreparedStatementRequestPrivate : public AthenaRequestPrivate {

public:
    UpdatePreparedStatementRequestPrivate(const AthenaRequest::Action action,
                                   UpdatePreparedStatementRequest * const q);
    UpdatePreparedStatementRequestPrivate(const UpdatePreparedStatementRequestPrivate &other,
                                   UpdatePreparedStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
