// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKANALYZERCONFIGURATIONRESPONSE_H
#define QTAWS_DELETENETWORKANALYZERCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletenetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteNetworkAnalyzerConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteNetworkAnalyzerConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteNetworkAnalyzerConfigurationResponse(const DeleteNetworkAnalyzerConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkAnalyzerConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(DeleteNetworkAnalyzerConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
