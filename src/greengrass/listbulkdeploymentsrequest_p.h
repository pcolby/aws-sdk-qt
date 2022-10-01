// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTSREQUEST_P_H
#define QTAWS_LISTBULKDEPLOYMENTSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listbulkdeploymentsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentsRequest;

class ListBulkDeploymentsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListBulkDeploymentsRequestPrivate(const GreengrassRequest::Action action,
                                   ListBulkDeploymentsRequest * const q);
    ListBulkDeploymentsRequestPrivate(const ListBulkDeploymentsRequestPrivate &other,
                                   ListBulkDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBulkDeploymentsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
