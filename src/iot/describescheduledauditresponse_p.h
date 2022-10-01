// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDAUDITRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULEDAUDITRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeScheduledAuditResponse;

class DescribeScheduledAuditResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeScheduledAuditResponsePrivate(DescribeScheduledAuditResponse * const q);

    void parseDescribeScheduledAuditResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledAuditResponse)
    Q_DISABLE_COPY(DescribeScheduledAuditResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
