// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSETREQUEST_H
#define QTAWS_DESCRIBESTACKSETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackSetRequest : public CloudFormationRequest {

public:
    DescribeStackSetRequest(const DescribeStackSetRequest &other);
    DescribeStackSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
