// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSECURITYPROFILEREQUEST_H
#define QTAWS_ATTACHSECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AttachSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT AttachSecurityProfileRequest : public IoTRequest {

public:
    AttachSecurityProfileRequest(const AttachSecurityProfileRequest &other);
    AttachSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
