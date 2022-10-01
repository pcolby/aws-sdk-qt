// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYPROFILERESPONSE_H
#define QTAWS_DELETESECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "deletesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DeleteSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT DeleteSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteSecurityProfileResponse(const DeleteSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityProfileResponse)
    Q_DISABLE_COPY(DeleteSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
