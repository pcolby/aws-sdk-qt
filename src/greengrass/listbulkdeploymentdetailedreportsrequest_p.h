// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSREQUEST_P_H
#define QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listbulkdeploymentdetailedreportsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentDetailedReportsRequest;

class ListBulkDeploymentDetailedReportsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListBulkDeploymentDetailedReportsRequestPrivate(const GreengrassRequest::Action action,
                                   ListBulkDeploymentDetailedReportsRequest * const q);
    ListBulkDeploymentDetailedReportsRequestPrivate(const ListBulkDeploymentDetailedReportsRequestPrivate &other,
                                   ListBulkDeploymentDetailedReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBulkDeploymentDetailedReportsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
