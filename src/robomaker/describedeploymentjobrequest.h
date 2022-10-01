// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTJOBREQUEST_H
#define QTAWS_DESCRIBEDEPLOYMENTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeDeploymentJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeDeploymentJobRequest : public RoboMakerRequest {

public:
    DescribeDeploymentJobRequest(const DescribeDeploymentJobRequest &other);
    DescribeDeploymentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
