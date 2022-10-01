// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKRESPONSE_P_H
#define QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeDetectMitigationActionsTaskResponse;

class DescribeDetectMitigationActionsTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeDetectMitigationActionsTaskResponsePrivate(DescribeDetectMitigationActionsTaskResponse * const q);

    void parseDescribeDetectMitigationActionsTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDetectMitigationActionsTaskResponse)
    Q_DISABLE_COPY(DescribeDetectMitigationActionsTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
