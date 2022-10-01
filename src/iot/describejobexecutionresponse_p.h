// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeJobExecutionResponse;

class DescribeJobExecutionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeJobExecutionResponsePrivate(DescribeJobExecutionResponse * const q);

    void parseDescribeJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobExecutionResponse)
    Q_DISABLE_COPY(DescribeJobExecutionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
