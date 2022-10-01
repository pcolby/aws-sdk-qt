// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSREQUEST_H
#define QTAWS_LISTBULKDEPLOYMENTDETAILEDREPORTSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListBulkDeploymentDetailedReportsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListBulkDeploymentDetailedReportsRequest : public GreengrassRequest {

public:
    ListBulkDeploymentDetailedReportsRequest(const ListBulkDeploymentDetailedReportsRequest &other);
    ListBulkDeploymentDetailedReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBulkDeploymentDetailedReportsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
