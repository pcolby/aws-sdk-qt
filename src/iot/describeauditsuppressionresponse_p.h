// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSUPPRESSIONRESPONSE_P_H
#define QTAWS_DESCRIBEAUDITSUPPRESSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeAuditSuppressionResponse;

class DescribeAuditSuppressionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeAuditSuppressionResponsePrivate(DescribeAuditSuppressionResponse * const q);

    void parseDescribeAuditSuppressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuditSuppressionResponse)
    Q_DISABLE_COPY(DescribeAuditSuppressionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
