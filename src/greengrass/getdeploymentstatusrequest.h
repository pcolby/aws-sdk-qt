// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTATUSREQUEST_H
#define QTAWS_GETDEPLOYMENTSTATUSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeploymentStatusRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetDeploymentStatusRequest : public GreengrassRequest {

public:
    GetDeploymentStatusRequest(const GetDeploymentStatusRequest &other);
    GetDeploymentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentStatusRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
