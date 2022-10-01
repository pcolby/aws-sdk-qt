// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREQUEST_P_H
#define QTAWS_GETDEVICEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getdevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetDeviceRequest;

class GetDeviceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetDeviceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetDeviceRequest * const q);
    GetDeviceRequestPrivate(const GetDeviceRequestPrivate &other,
                                   GetDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
