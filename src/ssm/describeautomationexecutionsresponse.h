// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEAUTOMATIONEXECUTIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeautomationexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationExecutionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeAutomationExecutionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeAutomationExecutionsResponse(const DescribeAutomationExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutomationExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutomationExecutionsResponse)
    Q_DISABLE_COPY(DescribeAutomationExecutionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
