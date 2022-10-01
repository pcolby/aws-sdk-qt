// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listdeploymentsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeploymentsRequest;

class ListDeploymentsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListDeploymentsRequestPrivate(const GreengrassRequest::Action action,
                                   ListDeploymentsRequest * const q);
    ListDeploymentsRequestPrivate(const ListDeploymentsRequestPrivate &other,
                                   ListDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
