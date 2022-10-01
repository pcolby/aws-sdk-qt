// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICESYNCREQUEST_P_H
#define QTAWS_STARTDEVICESYNCREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "startdevicesyncrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartDeviceSyncRequest;

class StartDeviceSyncRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    StartDeviceSyncRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   StartDeviceSyncRequest * const q);
    StartDeviceSyncRequestPrivate(const StartDeviceSyncRequestPrivate &other,
                                   StartDeviceSyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDeviceSyncRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
