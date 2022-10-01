// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKANALYZERCONFIGURATIONRESPONSE_H
#define QTAWS_GETNETWORKANALYZERCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getnetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetNetworkAnalyzerConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetNetworkAnalyzerConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetNetworkAnalyzerConfigurationResponse(const GetNetworkAnalyzerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkAnalyzerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(GetNetworkAnalyzerConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
