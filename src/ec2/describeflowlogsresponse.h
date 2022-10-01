// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWLOGSRESPONSE_H
#define QTAWS_DESCRIBEFLOWLOGSRESPONSE_H

#include "ec2response.h"
#include "describeflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFlowLogsResponsePrivate;

class QTAWSEC2_EXPORT DescribeFlowLogsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeFlowLogsResponse(const DescribeFlowLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFlowLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowLogsResponse)
    Q_DISABLE_COPY(DescribeFlowLogsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
