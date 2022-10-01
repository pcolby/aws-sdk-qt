// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETPOSITIONCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getpositionconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetPositionConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetPositionConfigurationResponse(const GetPositionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPositionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPositionConfigurationResponse)
    Q_DISABLE_COPY(GetPositionConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
