// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYPROFILEREQUEST_P_H
#define QTAWS_DELETESECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "deletesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DeleteSecurityProfileRequest;

class DeleteSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    DeleteSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   DeleteSecurityProfileRequest * const q);
    DeleteSecurityProfileRequestPrivate(const DeleteSecurityProfileRequestPrivate &other,
                                   DeleteSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
