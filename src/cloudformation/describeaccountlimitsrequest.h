// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeAccountLimitsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeAccountLimitsRequest : public CloudFormationRequest {

public:
    DescribeAccountLimitsRequest(const DescribeAccountLimitsRequest &other);
    DescribeAccountLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountLimitsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
