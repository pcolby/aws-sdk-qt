// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSECURITYPROFILEREQUEST_H
#define QTAWS_DETACHSECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DetachSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT DetachSecurityProfileRequest : public IoTRequest {

public:
    DetachSecurityProfileRequest(const DetachSecurityProfileRequest &other);
    DetachSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
