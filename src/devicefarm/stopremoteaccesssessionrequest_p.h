/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_STOPREMOTEACCESSSESSIONREQUEST_P_H
#define QTAWS_STOPREMOTEACCESSSESSIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "stopremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRemoteAccessSessionRequest;

class QTAWS_EXPORT StopRemoteAccessSessionRequestPrivate : public DeviceFarmRequestPrivate {

public:
    StopRemoteAccessSessionRequestPrivate(const DeviceFarmRequest::Action action,
                                   StopRemoteAccessSessionRequest * const q);
    StopRemoteAccessSessionRequestPrivate(const StopRemoteAccessSessionRequestPrivate &other,
                                   StopRemoteAccessSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
