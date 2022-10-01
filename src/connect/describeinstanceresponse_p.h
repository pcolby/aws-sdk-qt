// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceResponse;

class DescribeInstanceResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeInstanceResponsePrivate(DescribeInstanceResponse * const q);

    void parseDescribeInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceResponse)
    Q_DISABLE_COPY(DescribeInstanceResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
