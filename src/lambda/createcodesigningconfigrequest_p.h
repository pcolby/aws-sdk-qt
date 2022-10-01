// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_CREATECODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "createcodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class CreateCodeSigningConfigRequest;

class CreateCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    CreateCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   CreateCodeSigningConfigRequest * const q);
    CreateCodeSigningConfigRequestPrivate(const CreateCodeSigningConfigRequestPrivate &other,
                                   CreateCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
