// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYPROFILERESPONSE_H
#define QTAWS_CREATESECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "createsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class CreateSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT CreateSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateSecurityProfileResponse(const CreateSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityProfileResponse)
    Q_DISABLE_COPY(CreateSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
