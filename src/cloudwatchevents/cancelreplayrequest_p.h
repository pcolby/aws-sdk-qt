/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CANCELREPLAYREQUEST_P_H
#define QTAWS_CANCELREPLAYREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "cancelreplayrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CancelReplayRequest;

class QTAWS_EXPORT CancelReplayRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    CancelReplayRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   CancelReplayRequest * const q);
    CancelReplayRequestPrivate(const CancelReplayRequestPrivate &other,
                                   CancelReplayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelReplayRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
