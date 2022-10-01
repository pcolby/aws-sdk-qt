// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREPAREDSTATEMENTREQUEST_P_H
#define QTAWS_CREATEPREPAREDSTATEMENTREQUEST_P_H

#include "athenarequest_p.h"
#include "createpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class CreatePreparedStatementRequest;

class CreatePreparedStatementRequestPrivate : public AthenaRequestPrivate {

public:
    CreatePreparedStatementRequestPrivate(const AthenaRequest::Action action,
                                   CreatePreparedStatementRequest * const q);
    CreatePreparedStatementRequestPrivate(const CreatePreparedStatementRequestPrivate &other,
                                   CreatePreparedStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
