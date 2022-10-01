// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWRESPONSE_P_H
#define QTAWS_DESCRIBECONTACTFLOWRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowResponse;

class DescribeContactFlowResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeContactFlowResponsePrivate(DescribeContactFlowResponse * const q);

    void parseDescribeContactFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContactFlowResponse)
    Q_DISABLE_COPY(DescribeContactFlowResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
