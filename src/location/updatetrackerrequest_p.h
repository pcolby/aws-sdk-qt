// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRACKERREQUEST_P_H
#define QTAWS_UPDATETRACKERREQUEST_P_H

#include "locationrequest_p.h"
#include "updatetrackerrequest.h"

namespace QtAws {
namespace Location {

class UpdateTrackerRequest;

class UpdateTrackerRequestPrivate : public LocationRequestPrivate {

public:
    UpdateTrackerRequestPrivate(const LocationRequest::Action action,
                                   UpdateTrackerRequest * const q);
    UpdateTrackerRequestPrivate(const UpdateTrackerRequestPrivate &other,
                                   UpdateTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
