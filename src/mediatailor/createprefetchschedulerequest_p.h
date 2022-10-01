// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREFETCHSCHEDULEREQUEST_P_H
#define QTAWS_CREATEPREFETCHSCHEDULEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "createprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreatePrefetchScheduleRequest;

class CreatePrefetchScheduleRequestPrivate : public MediaTailorRequestPrivate {

public:
    CreatePrefetchScheduleRequestPrivate(const MediaTailorRequest::Action action,
                                   CreatePrefetchScheduleRequest * const q);
    CreatePrefetchScheduleRequestPrivate(const CreatePrefetchScheduleRequestPrivate &other,
                                   CreatePrefetchScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
