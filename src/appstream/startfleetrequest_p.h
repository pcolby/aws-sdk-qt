// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETREQUEST_P_H
#define QTAWS_STARTFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "startfleetrequest.h"

namespace QtAws {
namespace AppStream {

class StartFleetRequest;

class StartFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    StartFleetRequestPrivate(const AppStreamRequest::Action action,
                                   StartFleetRequest * const q);
    StartFleetRequestPrivate(const StartFleetRequestPrivate &other,
                                   StartFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
