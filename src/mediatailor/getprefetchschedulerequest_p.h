// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREFETCHSCHEDULEREQUEST_P_H
#define QTAWS_GETPREFETCHSCHEDULEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "getprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPrefetchScheduleRequest;

class GetPrefetchScheduleRequestPrivate : public MediaTailorRequestPrivate {

public:
    GetPrefetchScheduleRequestPrivate(const MediaTailorRequest::Action action,
                                   GetPrefetchScheduleRequest * const q);
    GetPrefetchScheduleRequestPrivate(const GetPrefetchScheduleRequestPrivate &other,
                                   GetPrefetchScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
