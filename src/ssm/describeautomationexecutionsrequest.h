// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONEXECUTIONSREQUEST_H
#define QTAWS_DESCRIBEAUTOMATIONEXECUTIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationExecutionsRequestPrivate;

class QTAWSSSM_EXPORT DescribeAutomationExecutionsRequest : public SsmRequest {

public:
    DescribeAutomationExecutionsRequest(const DescribeAutomationExecutionsRequest &other);
    DescribeAutomationExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutomationExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
