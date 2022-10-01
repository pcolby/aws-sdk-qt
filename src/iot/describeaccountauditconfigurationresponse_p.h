// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeAccountAuditConfigurationResponse;

class DescribeAccountAuditConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeAccountAuditConfigurationResponsePrivate(DescribeAccountAuditConfigurationResponse * const q);

    void parseDescribeAccountAuditConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(DescribeAccountAuditConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
