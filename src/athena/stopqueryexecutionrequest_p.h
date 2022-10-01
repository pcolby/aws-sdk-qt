// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYEXECUTIONREQUEST_P_H
#define QTAWS_STOPQUERYEXECUTIONREQUEST_P_H

#include "athenarequest_p.h"
#include "stopqueryexecutionrequest.h"

namespace QtAws {
namespace Athena {

class StopQueryExecutionRequest;

class StopQueryExecutionRequestPrivate : public AthenaRequestPrivate {

public:
    StopQueryExecutionRequestPrivate(const AthenaRequest::Action action,
                                   StopQueryExecutionRequest * const q);
    StopQueryExecutionRequestPrivate(const StopQueryExecutionRequestPrivate &other,
                                   StopQueryExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopQueryExecutionRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
