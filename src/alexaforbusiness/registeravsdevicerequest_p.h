// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAVSDEVICEREQUEST_P_H
#define QTAWS_REGISTERAVSDEVICEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "registeravsdevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RegisterAVSDeviceRequest;

class RegisterAVSDeviceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    RegisterAVSDeviceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   RegisterAVSDeviceRequest * const q);
    RegisterAVSDeviceRequestPrivate(const RegisterAVSDeviceRequestPrivate &other,
                                   RegisterAVSDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterAVSDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
