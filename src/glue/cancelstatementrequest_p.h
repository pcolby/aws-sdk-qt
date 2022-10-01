// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTATEMENTREQUEST_P_H
#define QTAWS_CANCELSTATEMENTREQUEST_P_H

#include "gluerequest_p.h"
#include "cancelstatementrequest.h"

namespace QtAws {
namespace Glue {

class CancelStatementRequest;

class CancelStatementRequestPrivate : public GlueRequestPrivate {

public:
    CancelStatementRequestPrivate(const GlueRequest::Action action,
                                   CancelStatementRequest * const q);
    CancelStatementRequestPrivate(const CancelStatementRequestPrivate &other,
                                   CancelStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
