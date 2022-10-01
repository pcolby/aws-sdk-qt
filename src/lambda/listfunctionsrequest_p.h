// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSREQUEST_P_H
#define QTAWS_LISTFUNCTIONSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listfunctionsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsRequest;

class ListFunctionsRequestPrivate : public LambdaRequestPrivate {

public:
    ListFunctionsRequestPrivate(const LambdaRequest::Action action,
                                   ListFunctionsRequest * const q);
    ListFunctionsRequestPrivate(const ListFunctionsRequestPrivate &other,
                                   ListFunctionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
