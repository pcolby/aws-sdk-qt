// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHERREQUEST_H
#define QTAWS_DESCRIBEPUBLISHERREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribePublisherRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribePublisherRequest : public CloudFormationRequest {

public:
    DescribePublisherRequest(const DescribePublisherRequest &other);
    DescribePublisherRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePublisherRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
