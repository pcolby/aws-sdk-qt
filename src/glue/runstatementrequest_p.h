// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSTATEMENTREQUEST_P_H
#define QTAWS_RUNSTATEMENTREQUEST_P_H

#include "gluerequest_p.h"
#include "runstatementrequest.h"

namespace QtAws {
namespace Glue {

class RunStatementRequest;

class RunStatementRequestPrivate : public GlueRequestPrivate {

public:
    RunStatementRequestPrivate(const GlueRequest::Action action,
                                   RunStatementRequest * const q);
    RunStatementRequestPrivate(const RunStatementRequestPrivate &other,
                                   RunStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
