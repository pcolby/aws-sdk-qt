// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceAttributeResponse;

class DescribeInstanceAttributeResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeInstanceAttributeResponsePrivate(DescribeInstanceAttributeResponse * const q);

    void parseDescribeInstanceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAttributeResponse)
    Q_DISABLE_COPY(DescribeInstanceAttributeResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
