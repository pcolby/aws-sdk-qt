// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETFUNCTIONCONFIGURATIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctionconfigurationrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConfigurationRequest;

class GetFunctionConfigurationRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionConfigurationRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionConfigurationRequest * const q);
    GetFunctionConfigurationRequestPrivate(const GetFunctionConfigurationRequestPrivate &other,
                                   GetFunctionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionConfigurationRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
