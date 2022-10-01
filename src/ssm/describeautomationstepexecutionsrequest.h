// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSREQUEST_H
#define QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationStepExecutionsRequestPrivate;

class QTAWSSSM_EXPORT DescribeAutomationStepExecutionsRequest : public SsmRequest {

public:
    DescribeAutomationStepExecutionsRequest(const DescribeAutomationStepExecutionsRequest &other);
    DescribeAutomationStepExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutomationStepExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
