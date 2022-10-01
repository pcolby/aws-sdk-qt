// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATESECURITYPROFILEBEHAVIORSREQUEST_H
#define QTAWS_VALIDATESECURITYPROFILEBEHAVIORSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ValidateSecurityProfileBehaviorsRequestPrivate;

class QTAWSIOT_EXPORT ValidateSecurityProfileBehaviorsRequest : public IoTRequest {

public:
    ValidateSecurityProfileBehaviorsRequest(const ValidateSecurityProfileBehaviorsRequest &other);
    ValidateSecurityProfileBehaviorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateSecurityProfileBehaviorsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
