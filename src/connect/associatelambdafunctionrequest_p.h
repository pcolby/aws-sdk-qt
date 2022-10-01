// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELAMBDAFUNCTIONREQUEST_P_H
#define QTAWS_ASSOCIATELAMBDAFUNCTIONREQUEST_P_H

#include "connectrequest_p.h"
#include "associatelambdafunctionrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLambdaFunctionRequest;

class AssociateLambdaFunctionRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateLambdaFunctionRequestPrivate(const ConnectRequest::Action action,
                                   AssociateLambdaFunctionRequest * const q);
    AssociateLambdaFunctionRequestPrivate(const AssociateLambdaFunctionRequestPrivate &other,
                                   AssociateLambdaFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateLambdaFunctionRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
