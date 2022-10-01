// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWRESPONSE_P_H
#define QTAWS_DESCRIBEFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class DescribeFlowResponse;

class DescribeFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit DescribeFlowResponsePrivate(DescribeFlowResponse * const q);

    void parseDescribeFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFlowResponse)
    Q_DISABLE_COPY(DescribeFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
