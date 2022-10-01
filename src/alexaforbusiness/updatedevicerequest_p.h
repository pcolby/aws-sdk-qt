// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEREQUEST_P_H
#define QTAWS_UPDATEDEVICEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updatedevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateDeviceRequest;

class UpdateDeviceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateDeviceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateDeviceRequest * const q);
    UpdateDeviceRequestPrivate(const UpdateDeviceRequestPrivate &other,
                                   UpdateDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
