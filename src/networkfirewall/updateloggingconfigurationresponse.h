// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATELOGGINGCONFIGURATIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updateloggingconfigurationrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateLoggingConfigurationResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateLoggingConfigurationResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateLoggingConfigurationResponse(const UpdateLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoggingConfigurationResponse)
    Q_DISABLE_COPY(UpdateLoggingConfigurationResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
