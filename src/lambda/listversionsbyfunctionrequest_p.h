// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSBYFUNCTIONREQUEST_P_H
#define QTAWS_LISTVERSIONSBYFUNCTIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "listversionsbyfunctionrequest.h"

namespace QtAws {
namespace Lambda {

class ListVersionsByFunctionRequest;

class ListVersionsByFunctionRequestPrivate : public LambdaRequestPrivate {

public:
    ListVersionsByFunctionRequestPrivate(const LambdaRequest::Action action,
                                   ListVersionsByFunctionRequest * const q);
    ListVersionsByFunctionRequestPrivate(const ListVersionsByFunctionRequestPrivate &other,
                                   ListVersionsByFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVersionsByFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
