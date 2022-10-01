// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRACKERREQUEST_P_H
#define QTAWS_DELETETRACKERREQUEST_P_H

#include "locationrequest_p.h"
#include "deletetrackerrequest.h"

namespace QtAws {
namespace Location {

class DeleteTrackerRequest;

class DeleteTrackerRequestPrivate : public LocationRequestPrivate {

public:
    DeleteTrackerRequestPrivate(const LocationRequest::Action action,
                                   DeleteTrackerRequest * const q);
    DeleteTrackerRequestPrivate(const DeleteTrackerRequestPrivate &other,
                                   DeleteTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
