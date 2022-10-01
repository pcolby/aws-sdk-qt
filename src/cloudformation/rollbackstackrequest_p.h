// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKSTACKREQUEST_P_H
#define QTAWS_ROLLBACKSTACKREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "rollbackstackrequest.h"

namespace QtAws {
namespace CloudFormation {

class RollbackStackRequest;

class RollbackStackRequestPrivate : public CloudFormationRequestPrivate {

public:
    RollbackStackRequestPrivate(const CloudFormationRequest::Action action,
                                   RollbackStackRequest * const q);
    RollbackStackRequestPrivate(const RollbackStackRequestPrivate &other,
                                   RollbackStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(RollbackStackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
