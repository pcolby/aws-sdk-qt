// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICEREQUEST_P_H
#define QTAWS_REGISTERDEVICEREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "registerdevicerequest.h"

namespace QtAws {
namespace CognitoSync {

class RegisterDeviceRequest;

class RegisterDeviceRequestPrivate : public CognitoSyncRequestPrivate {

public:
    RegisterDeviceRequestPrivate(const CognitoSyncRequest::Action action,
                                   RegisterDeviceRequest * const q);
    RegisterDeviceRequestPrivate(const RegisterDeviceRequestPrivate &other,
                                   RegisterDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDeviceRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
