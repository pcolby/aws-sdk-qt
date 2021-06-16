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

#ifndef QTAWS_GETCHANNELREQUEST_P_H
#define QTAWS_GETCHANNELREQUEST_P_H

#include "ivsrequest_p.h"
#include "getchannelrequest.h"

namespace QtAws {
namespace IVS {

class GetChannelRequest;

class QTAWS_EXPORT GetChannelRequestPrivate : public IvsRequestPrivate {

public:
    GetChannelRequestPrivate(const IvsRequest::Action action,
                                   GetChannelRequest * const q);
    GetChannelRequestPrivate(const GetChannelRequestPrivate &other,
                                   GetChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelRequest)

};

} // namespace IVS
} // namespace QtAws

#endif
