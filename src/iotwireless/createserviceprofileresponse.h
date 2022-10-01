// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEPROFILERESPONSE_H
#define QTAWS_CREATESERVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "createserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateServiceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateServiceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateServiceProfileResponse(const CreateServiceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceProfileResponse)
    Q_DISABLE_COPY(CreateServiceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
