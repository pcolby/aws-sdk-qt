// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKANALYZERCONFIGURATIONRESPONSE_H
#define QTAWS_CREATENETWORKANALYZERCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "createnetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateNetworkAnalyzerConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateNetworkAnalyzerConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateNetworkAnalyzerConfigurationResponse(const CreateNetworkAnalyzerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkAnalyzerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(CreateNetworkAnalyzerConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
