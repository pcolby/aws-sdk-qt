// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAMBDAFUNCTIONSREQUEST_P_H
#define QTAWS_LISTLAMBDAFUNCTIONSREQUEST_P_H

#include "connectrequest_p.h"
#include "listlambdafunctionsrequest.h"

namespace QtAws {
namespace Connect {

class ListLambdaFunctionsRequest;

class ListLambdaFunctionsRequestPrivate : public ConnectRequestPrivate {

public:
    ListLambdaFunctionsRequestPrivate(const ConnectRequest::Action action,
                                   ListLambdaFunctionsRequest * const q);
    ListLambdaFunctionsRequestPrivate(const ListLambdaFunctionsRequestPrivate &other,
                                   ListLambdaFunctionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLambdaFunctionsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
