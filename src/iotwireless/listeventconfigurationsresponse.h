// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTEVENTCONFIGURATIONSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listeventconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListEventConfigurationsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListEventConfigurationsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListEventConfigurationsResponse(const ListEventConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventConfigurationsResponse)
    Q_DISABLE_COPY(ListEventConfigurationsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
