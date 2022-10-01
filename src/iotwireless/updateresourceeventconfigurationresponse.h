// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEEVENTCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATERESOURCEEVENTCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "updateresourceeventconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateResourceEventConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateResourceEventConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateResourceEventConfigurationResponse(const UpdateResourceEventConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceEventConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceEventConfigurationResponse)
    Q_DISABLE_COPY(UpdateResourceEventConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
