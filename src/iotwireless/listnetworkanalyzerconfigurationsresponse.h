// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKANALYZERCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTNETWORKANALYZERCONFIGURATIONSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listnetworkanalyzerconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListNetworkAnalyzerConfigurationsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListNetworkAnalyzerConfigurationsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListNetworkAnalyzerConfigurationsResponse(const ListNetworkAnalyzerConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworkAnalyzerConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkAnalyzerConfigurationsResponse)
    Q_DISABLE_COPY(ListNetworkAnalyzerConfigurationsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
