// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKDEPLOYMENTSTATUSREQUEST_H
#define QTAWS_GETBULKDEPLOYMENTSTATUSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetBulkDeploymentStatusRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetBulkDeploymentStatusRequest : public GreengrassRequest {

public:
    GetBulkDeploymentStatusRequest(const GetBulkDeploymentStatusRequest &other);
    GetBulkDeploymentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBulkDeploymentStatusRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
