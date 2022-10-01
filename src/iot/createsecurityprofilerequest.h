// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYPROFILEREQUEST_H
#define QTAWS_CREATESECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT CreateSecurityProfileRequest : public IoTRequest {

public:
    CreateSecurityProfileRequest(const CreateSecurityProfileRequest &other);
    CreateSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
