// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWMODULERESPONSE_P_H
#define QTAWS_DESCRIBECONTACTFLOWMODULERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowModuleResponse;

class DescribeContactFlowModuleResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeContactFlowModuleResponsePrivate(DescribeContactFlowModuleResponse * const q);

    void parseDescribeContactFlowModuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContactFlowModuleResponse)
    Q_DISABLE_COPY(DescribeContactFlowModuleResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
