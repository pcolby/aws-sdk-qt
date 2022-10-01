// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORENTITYRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTORENTITYRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorEntityResponse;

class DescribeConnectorEntityResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DescribeConnectorEntityResponsePrivate(DescribeConnectorEntityResponse * const q);

    void parseDescribeConnectorEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorEntityResponse)
    Q_DISABLE_COPY(DescribeConnectorEntityResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
