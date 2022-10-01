// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEFFECTIVEDEPLOYMENTSREQUEST_P_H
#define QTAWS_LISTEFFECTIVEDEPLOYMENTSREQUEST_P_H

#include "greengrassv2request_p.h"
#include "listeffectivedeploymentsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListEffectiveDeploymentsRequest;

class ListEffectiveDeploymentsRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ListEffectiveDeploymentsRequestPrivate(const GreengrassV2Request::Action action,
                                   ListEffectiveDeploymentsRequest * const q);
    ListEffectiveDeploymentsRequestPrivate(const ListEffectiveDeploymentsRequestPrivate &other,
                                   ListEffectiveDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEffectiveDeploymentsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
