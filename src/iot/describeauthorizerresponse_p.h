// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHORIZERRESPONSE_P_H
#define QTAWS_DESCRIBEAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeAuthorizerResponse;

class DescribeAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeAuthorizerResponsePrivate(DescribeAuthorizerResponse * const q);

    void parseDescribeAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuthorizerResponse)
    Q_DISABLE_COPY(DescribeAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
