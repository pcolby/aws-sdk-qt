// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTSTATUSRESPONSE_H
#define QTAWS_DESCRIBEAGENTSTATUSRESPONSE_H

#include "connectresponse.h"
#include "describeagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class DescribeAgentStatusResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeAgentStatusResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeAgentStatusResponse(const DescribeAgentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAgentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentStatusResponse)
    Q_DISABLE_COPY(DescribeAgentStatusResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
