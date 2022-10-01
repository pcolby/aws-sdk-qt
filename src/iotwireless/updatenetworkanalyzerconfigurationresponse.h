// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKANALYZERCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATENETWORKANALYZERCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatenetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateNetworkAnalyzerConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateNetworkAnalyzerConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateNetworkAnalyzerConfigurationResponse(const UpdateNetworkAnalyzerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkAnalyzerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(UpdateNetworkAnalyzerConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
