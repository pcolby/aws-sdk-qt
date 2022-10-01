// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOSITIONCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTPOSITIONCONFIGURATIONSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listpositionconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListPositionConfigurationsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListPositionConfigurationsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListPositionConfigurationsResponse(const ListPositionConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPositionConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPositionConfigurationsResponse)
    Q_DISABLE_COPY(ListPositionConfigurationsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
