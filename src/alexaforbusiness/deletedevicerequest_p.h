// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEREQUEST_P_H
#define QTAWS_DELETEDEVICEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletedevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceRequest;

class DeleteDeviceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteDeviceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteDeviceRequest * const q);
    DeleteDeviceRequestPrivate(const DeleteDeviceRequestPrivate &other,
                                   DeleteDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
