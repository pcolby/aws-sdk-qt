// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSREQUEST_H
#define QTAWS_DESCRIBESTACKDRIFTDETECTIONSTATUSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackDriftDetectionStatusRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackDriftDetectionStatusRequest : public CloudFormationRequest {

public:
    DescribeStackDriftDetectionStatusRequest(const DescribeStackDriftDetectionStatusRequest &other);
    DescribeStackDriftDetectionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackDriftDetectionStatusRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
