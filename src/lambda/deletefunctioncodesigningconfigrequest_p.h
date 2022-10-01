// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletefunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionCodeSigningConfigRequest;

class DeleteFunctionCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteFunctionCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   DeleteFunctionCodeSigningConfigRequest * const q);
    DeleteFunctionCodeSigningConfigRequestPrivate(const DeleteFunctionCodeSigningConfigRequestPrivate &other,
                                   DeleteFunctionCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
