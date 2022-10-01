// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAPREQUEST_P_H
#define QTAWS_UPDATEMAPREQUEST_P_H

#include "locationrequest_p.h"
#include "updatemaprequest.h"

namespace QtAws {
namespace Location {

class UpdateMapRequest;

class UpdateMapRequestPrivate : public LocationRequestPrivate {

public:
    UpdateMapRequestPrivate(const LocationRequest::Action action,
                                   UpdateMapRequest * const q);
    UpdateMapRequestPrivate(const UpdateMapRequestPrivate &other,
                                   UpdateMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
