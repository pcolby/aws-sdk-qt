// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETREQUEST_P_H
#define QTAWS_UPDATEFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "updatefleetrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateFleetRequest;

class UpdateFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    UpdateFleetRequestPrivate(const AppStreamRequest::Action action,
                                   UpdateFleetRequest * const q);
    UpdateFleetRequestPrivate(const UpdateFleetRequestPrivate &other,
                                   UpdateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
