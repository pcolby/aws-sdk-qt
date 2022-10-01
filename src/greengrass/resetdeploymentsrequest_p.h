// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDEPLOYMENTSREQUEST_P_H
#define QTAWS_RESETDEPLOYMENTSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "resetdeploymentsrequest.h"

namespace QtAws {
namespace Greengrass {

class ResetDeploymentsRequest;

class ResetDeploymentsRequestPrivate : public GreengrassRequestPrivate {

public:
    ResetDeploymentsRequestPrivate(const GreengrassRequest::Action action,
                                   ResetDeploymentsRequest * const q);
    ResetDeploymentsRequestPrivate(const ResetDeploymentsRequestPrivate &other,
                                   ResetDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetDeploymentsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
