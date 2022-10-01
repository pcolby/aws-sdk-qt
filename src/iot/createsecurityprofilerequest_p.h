// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYPROFILEREQUEST_P_H
#define QTAWS_CREATESECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "createsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class CreateSecurityProfileRequest;

class CreateSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    CreateSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   CreateSecurityProfileRequest * const q);
    CreateSecurityProfileRequestPrivate(const CreateSecurityProfileRequestPrivate &other,
                                   CreateSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
