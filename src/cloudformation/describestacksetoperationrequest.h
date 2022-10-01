// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_H
#define QTAWS_DESCRIBESTACKSETOPERATIONREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetOperationRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackSetOperationRequest : public CloudFormationRequest {

public:
    DescribeStackSetOperationRequest(const DescribeStackSetOperationRequest &other);
    DescribeStackSetOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSetOperationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
