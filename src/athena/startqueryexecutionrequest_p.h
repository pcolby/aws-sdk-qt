// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYEXECUTIONREQUEST_P_H
#define QTAWS_STARTQUERYEXECUTIONREQUEST_P_H

#include "athenarequest_p.h"
#include "startqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class StartQueryExecutionRequest;

class StartQueryExecutionRequestPrivate : public AthenaRequestPrivate {

public:
    StartQueryExecutionRequestPrivate(const AthenaRequest::Action action,
                                   StartQueryExecutionRequest * const q);
    StartQueryExecutionRequestPrivate(const StartQueryExecutionRequestPrivate &other,
                                   StartQueryExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
