// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "listfunctionsbycodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsByCodeSigningConfigRequest;

class ListFunctionsByCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    ListFunctionsByCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   ListFunctionsByCodeSigningConfigRequest * const q);
    ListFunctionsByCodeSigningConfigRequestPrivate(const ListFunctionsByCodeSigningConfigRequestPrivate &other,
                                   ListFunctionsByCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionsByCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
