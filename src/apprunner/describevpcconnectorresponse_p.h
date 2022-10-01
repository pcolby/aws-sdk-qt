// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCONNECTORRESPONSE_P_H
#define QTAWS_DESCRIBEVPCCONNECTORRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DescribeVpcConnectorResponse;

class DescribeVpcConnectorResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DescribeVpcConnectorResponsePrivate(DescribeVpcConnectorResponse * const q);

    void parseDescribeVpcConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcConnectorResponse)
    Q_DISABLE_COPY(DescribeVpcConnectorResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
