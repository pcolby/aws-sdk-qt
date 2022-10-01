// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEUSAGEDATAREQUEST_P_H
#define QTAWS_DELETEDEVICEUSAGEDATAREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletedeviceusagedatarequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceUsageDataRequest;

class DeleteDeviceUsageDataRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteDeviceUsageDataRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteDeviceUsageDataRequest * const q);
    DeleteDeviceUsageDataRequestPrivate(const DeleteDeviceUsageDataRequestPrivate &other,
                                   DeleteDeviceUsageDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceUsageDataRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
