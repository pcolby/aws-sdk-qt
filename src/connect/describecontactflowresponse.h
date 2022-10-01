// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWRESPONSE_H
#define QTAWS_DESCRIBECONTACTFLOWRESPONSE_H

#include "connectresponse.h"
#include "describecontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeContactFlowResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeContactFlowResponse(const DescribeContactFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContactFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactFlowResponse)
    Q_DISABLE_COPY(DescribeContactFlowResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
