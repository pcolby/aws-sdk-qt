// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOSITIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTPOSITIONCONFIGURATIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "putpositionconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutPositionConfigurationResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT PutPositionConfigurationResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    PutPositionConfigurationResponse(const PutPositionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPositionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPositionConfigurationResponse)
    Q_DISABLE_COPY(PutPositionConfigurationResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
