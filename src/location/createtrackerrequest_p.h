// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRACKERREQUEST_P_H
#define QTAWS_CREATETRACKERREQUEST_P_H

#include "locationrequest_p.h"
#include "createtrackerrequest.h"

namespace QtAws {
namespace Location {

class CreateTrackerRequest;

class CreateTrackerRequestPrivate : public LocationRequestPrivate {

public:
    CreateTrackerRequestPrivate(const LocationRequest::Action action,
                                   CreateTrackerRequest * const q);
    CreateTrackerRequestPrivate(const CreateTrackerRequestPrivate &other,
                                   CreateTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
