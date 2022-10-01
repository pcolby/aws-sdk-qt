// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSECURITYPROFILEREQUEST_P_H
#define QTAWS_ATTACHSECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "attachsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class AttachSecurityProfileRequest;

class AttachSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    AttachSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   AttachSecurityProfileRequest * const q);
    AttachSecurityProfileRequestPrivate(const AttachSecurityProfileRequestPrivate &other,
                                   AttachSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
