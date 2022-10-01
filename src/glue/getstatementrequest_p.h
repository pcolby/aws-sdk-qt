// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTREQUEST_P_H
#define QTAWS_GETSTATEMENTREQUEST_P_H

#include "gluerequest_p.h"
#include "getstatementrequest.h"

namespace QtAws {
namespace Glue {

class GetStatementRequest;

class GetStatementRequestPrivate : public GlueRequestPrivate {

public:
    GetStatementRequestPrivate(const GlueRequest::Action action,
                                   GetStatementRequest * const q);
    GetStatementRequestPrivate(const GetStatementRequestPrivate &other,
                                   GetStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
