// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAPREQUEST_P_H
#define QTAWS_CREATEMAPREQUEST_P_H

#include "locationrequest_p.h"
#include "createmaprequest.h"

namespace QtAws {
namespace Location {

class CreateMapRequest;

class CreateMapRequestPrivate : public LocationRequestPrivate {

public:
    CreateMapRequestPrivate(const LocationRequest::Action action,
                                   CreateMapRequest * const q);
    CreateMapRequestPrivate(const CreateMapRequestPrivate &other,
                                   CreateMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
