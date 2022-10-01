// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETREQUEST_P_H
#define QTAWS_STOPFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "stopfleetrequest.h"

namespace QtAws {
namespace AppStream {

class StopFleetRequest;

class StopFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    StopFleetRequestPrivate(const AppStreamRequest::Action action,
                                   StopFleetRequest * const q);
    StopFleetRequestPrivate(const StopFleetRequestPrivate &other,
                                   StopFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
