// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTAUTHORIZERRESPONSE_P_H
#define QTAWS_DESCRIBEDEFAULTAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeDefaultAuthorizerResponse;

class DescribeDefaultAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeDefaultAuthorizerResponsePrivate(DescribeDefaultAuthorizerResponse * const q);

    void parseDescribeDefaultAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultAuthorizerResponse)
    Q_DISABLE_COPY(DescribeDefaultAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
