// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSTYLEDESCRIPTORREQUEST_P_H
#define QTAWS_GETMAPSTYLEDESCRIPTORREQUEST_P_H

#include "locationrequest_p.h"
#include "getmapstyledescriptorrequest.h"

namespace QtAws {
namespace Location {

class GetMapStyleDescriptorRequest;

class GetMapStyleDescriptorRequestPrivate : public LocationRequestPrivate {

public:
    GetMapStyleDescriptorRequestPrivate(const LocationRequest::Action action,
                                   GetMapStyleDescriptorRequest * const q);
    GetMapStyleDescriptorRequestPrivate(const GetMapStyleDescriptorRequestPrivate &other,
                                   GetMapStyleDescriptorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMapStyleDescriptorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
