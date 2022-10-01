// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILEREQUEST_P_H
#define QTAWS_UPDATESECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "updatesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class UpdateSecurityProfileRequest;

class UpdateSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    UpdateSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   UpdateSecurityProfileRequest * const q);
    UpdateSecurityProfileRequestPrivate(const UpdateSecurityProfileRequestPrivate &other,
                                   UpdateSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
