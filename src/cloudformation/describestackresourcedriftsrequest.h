// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEDRIFTSREQUEST_H
#define QTAWS_DESCRIBESTACKRESOURCEDRIFTSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceDriftsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourceDriftsRequest : public CloudFormationRequest {

public:
    DescribeStackResourceDriftsRequest(const DescribeStackResourceDriftsRequest &other);
    DescribeStackResourceDriftsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourceDriftsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
