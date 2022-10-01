// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKRESOURCEREQUEST_H
#define QTAWS_DESCRIBESTACKRESOURCEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackResourceRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeStackResourceRequest : public CloudFormationRequest {

public:
    DescribeStackResourceRequest(const DescribeStackResourceRequest &other);
    DescribeStackResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackResourceRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
