// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_PUTFUNCTIONCODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "putfunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionCodeSigningConfigRequest;

class PutFunctionCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    PutFunctionCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   PutFunctionCodeSigningConfigRequest * const q);
    PutFunctionCodeSigningConfigRequestPrivate(const PutFunctionCodeSigningConfigRequestPrivate &other,
                                   PutFunctionCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
