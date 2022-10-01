// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWRESPONSE_H
#define QTAWS_DESCRIBEFLOWRESPONSE_H

#include "mediaconnectresponse.h"
#include "describeflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class DescribeFlowResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT DescribeFlowResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    DescribeFlowResponse(const DescribeFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowResponse)
    Q_DISABLE_COPY(DescribeFlowResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
