/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REMOVETARGETSREQUEST_P_H
#define QTAWS_REMOVETARGETSREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "removetargetsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class RemoveTargetsRequest;

class QTAWS_EXPORT RemoveTargetsRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    RemoveTargetsRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   RemoveTargetsRequest * const q);
    RemoveTargetsRequestPrivate(const RemoveTargetsRequestPrivate &other,
                                   RemoveTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTargetsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
