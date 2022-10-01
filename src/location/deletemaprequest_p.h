// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAPREQUEST_P_H
#define QTAWS_DELETEMAPREQUEST_P_H

#include "locationrequest_p.h"
#include "deletemaprequest.h"

namespace QtAws {
namespace Location {

class DeleteMapRequest;

class DeleteMapRequestPrivate : public LocationRequestPrivate {

public:
    DeleteMapRequestPrivate(const LocationRequest::Action action,
                                   DeleteMapRequest * const q);
    DeleteMapRequestPrivate(const DeleteMapRequestPrivate &other,
                                   DeleteMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
