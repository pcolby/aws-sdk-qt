// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATESECURITYPROFILEBEHAVIORSRESPONSE_H
#define QTAWS_VALIDATESECURITYPROFILEBEHAVIORSRESPONSE_H

#include "iotresponse.h"
#include "validatesecurityprofilebehaviorsrequest.h"

namespace QtAws {
namespace IoT {

class ValidateSecurityProfileBehaviorsResponsePrivate;

class QTAWSIOT_EXPORT ValidateSecurityProfileBehaviorsResponse : public IoTResponse {
    Q_OBJECT

public:
    ValidateSecurityProfileBehaviorsResponse(const ValidateSecurityProfileBehaviorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateSecurityProfileBehaviorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateSecurityProfileBehaviorsResponse)
    Q_DISABLE_COPY(ValidateSecurityProfileBehaviorsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
