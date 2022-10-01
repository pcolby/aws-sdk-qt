// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSECURITYPROFILEREQUEST_P_H
#define QTAWS_DETACHSECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "detachsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DetachSecurityProfileRequest;

class DetachSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    DetachSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   DetachSecurityProfileRequest * const q);
    DetachSecurityProfileRequestPrivate(const DetachSecurityProfileRequestPrivate &other,
                                   DetachSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
