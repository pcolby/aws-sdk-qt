// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_GETFUNCTIONCODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionCodeSigningConfigRequest;

class GetFunctionCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionCodeSigningConfigRequest * const q);
    GetFunctionCodeSigningConfigRequestPrivate(const GetFunctionCodeSigningConfigRequestPrivate &other,
                                   GetFunctionCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
