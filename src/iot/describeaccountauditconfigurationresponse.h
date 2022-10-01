// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "describeaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAccountAuditConfigurationResponsePrivate;

class QTAWSIOT_EXPORT DescribeAccountAuditConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAccountAuditConfigurationResponse(const DescribeAccountAuditConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountAuditConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAuditConfigurationResponse)
    Q_DISABLE_COPY(DescribeAccountAuditConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
