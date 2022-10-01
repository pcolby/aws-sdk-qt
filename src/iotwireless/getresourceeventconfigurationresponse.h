// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEEVENTCONFIGURATIONRESPONSE_H
#define QTAWS_GETRESOURCEEVENTCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getresourceeventconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceEventConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetResourceEventConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetResourceEventConfigurationResponse(const GetResourceEventConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceEventConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceEventConfigurationResponse)
    Q_DISABLE_COPY(GetResourceEventConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
