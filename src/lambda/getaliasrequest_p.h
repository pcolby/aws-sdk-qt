// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALIASREQUEST_P_H
#define QTAWS_GETALIASREQUEST_P_H

#include "lambdarequest_p.h"
#include "getaliasrequest.h"

namespace QtAws {
namespace Lambda {

class GetAliasRequest;

class GetAliasRequestPrivate : public LambdaRequestPrivate {

public:
    GetAliasRequestPrivate(const LambdaRequest::Action action,
                                   GetAliasRequest * const q);
    GetAliasRequestPrivate(const GetAliasRequestPrivate &other,
                                   GetAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAliasRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
