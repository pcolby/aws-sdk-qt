// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETHOOKSREQUEST_H
#define QTAWS_DESCRIBECHANGESETHOOKSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetHooksRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeChangeSetHooksRequest : public CloudFormationRequest {

public:
    DescribeChangeSetHooksRequest(const DescribeChangeSetHooksRequest &other);
    DescribeChangeSetHooksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChangeSetHooksRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
