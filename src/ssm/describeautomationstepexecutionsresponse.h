// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeautomationstepexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationStepExecutionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeAutomationStepExecutionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAutomationStepExecutionsResponse(const DescribeAutomationStepExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutomationStepExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutomationStepExecutionsResponse)
    Q_DISABLE_COPY(DescribeAutomationStepExecutionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
