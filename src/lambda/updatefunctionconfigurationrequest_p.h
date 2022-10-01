// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONCONFIGURATIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatefunctionconfigurationrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionConfigurationRequest;

class UpdateFunctionConfigurationRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateFunctionConfigurationRequestPrivate(const LambdaRequest::Action action,
                                   UpdateFunctionConfigurationRequest * const q);
    UpdateFunctionConfigurationRequestPrivate(const UpdateFunctionConfigurationRequestPrivate &other,
                                   UpdateFunctionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionConfigurationRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
