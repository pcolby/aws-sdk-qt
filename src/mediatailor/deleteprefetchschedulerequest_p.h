// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREFETCHSCHEDULEREQUEST_P_H
#define QTAWS_DELETEPREFETCHSCHEDULEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deleteprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePrefetchScheduleRequest;

class DeletePrefetchScheduleRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeletePrefetchScheduleRequestPrivate(const MediaTailorRequest::Action action,
                                   DeletePrefetchScheduleRequest * const q);
    DeletePrefetchScheduleRequestPrivate(const DeletePrefetchScheduleRequestPrivate &other,
                                   DeletePrefetchScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePrefetchScheduleRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
