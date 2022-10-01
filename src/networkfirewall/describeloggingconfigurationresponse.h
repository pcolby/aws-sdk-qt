// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "describeloggingconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DescribeLoggingConfigurationResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DescribeLoggingConfigurationResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DescribeLoggingConfigurationResponse(const DescribeLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingConfigurationResponse)
    Q_DISABLE_COPY(DescribeLoggingConfigurationResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
