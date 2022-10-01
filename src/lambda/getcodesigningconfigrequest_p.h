// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_GETCODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getcodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetCodeSigningConfigRequest;

class GetCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetCodeSigningConfigRequest * const q);
    GetCodeSigningConfigRequestPrivate(const GetCodeSigningConfigRequestPrivate &other,
                                   GetCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
