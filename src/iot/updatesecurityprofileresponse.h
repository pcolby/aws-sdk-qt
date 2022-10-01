// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILERESPONSE_H
#define QTAWS_UPDATESECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "updatesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class UpdateSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT UpdateSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateSecurityProfileResponse(const UpdateSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityProfileResponse)
    Q_DISABLE_COPY(UpdateSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
