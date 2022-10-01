// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKRESPONSE_P_H
#define QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeAuditMitigationActionsTaskResponse;

class DescribeAuditMitigationActionsTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeAuditMitigationActionsTaskResponsePrivate(DescribeAuditMitigationActionsTaskResponse * const q);

    void parseDescribeAuditMitigationActionsTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuditMitigationActionsTaskResponse)
    Q_DISABLE_COPY(DescribeAuditMitigationActionsTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
