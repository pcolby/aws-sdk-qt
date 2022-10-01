// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCESREQUEST_H
#define QTAWS_DESCRIBESTACKRESOURCESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourcesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourcesRequest : public CloudFormationRequest {

public:
    DescribeStackResourcesRequest(const DescribeStackResourcesRequest &other);
    DescribeStackResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourcesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
