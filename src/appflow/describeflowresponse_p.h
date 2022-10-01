// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWRESPONSE_P_H
#define QTAWS_DESCRIBEFLOWRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowResponse;

class DescribeFlowResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DescribeFlowResponsePrivate(DescribeFlowResponse * const q);

    void parseDescribeFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFlowResponse)
    Q_DISABLE_COPY(DescribeFlowResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
