// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSCHEDULEREQUEST_P_H
#define QTAWS_GETCHANNELSCHEDULEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "getchannelschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelScheduleRequest;

class GetChannelScheduleRequestPrivate : public MediaTailorRequestPrivate {

public:
    GetChannelScheduleRequestPrivate(const MediaTailorRequest::Action action,
                                   GetChannelScheduleRequest * const q);
    GetChannelScheduleRequestPrivate(const GetChannelScheduleRequestPrivate &other,
                                   GetChannelScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
