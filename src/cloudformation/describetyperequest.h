// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPEREQUEST_H
#define QTAWS_DESCRIBETYPEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeTypeRequest : public CloudFormationRequest {

public:
    DescribeTypeRequest(const DescribeTypeRequest &other);
    DescribeTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
