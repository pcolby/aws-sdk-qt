// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITFINDINGRESPONSE_P_H
#define QTAWS_DESCRIBEAUDITFINDINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeAuditFindingResponse;

class DescribeAuditFindingResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeAuditFindingResponsePrivate(DescribeAuditFindingResponse * const q);

    void parseDescribeAuditFindingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuditFindingResponse)
    Q_DISABLE_COPY(DescribeAuditFindingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
