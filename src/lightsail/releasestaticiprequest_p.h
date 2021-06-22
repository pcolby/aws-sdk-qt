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

#ifndef QTAWS_RELEASESTATICIPREQUEST_P_H
#define QTAWS_RELEASESTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "releasestaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class ReleaseStaticIpRequest;

class ReleaseStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    ReleaseStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   ReleaseStaticIpRequest * const q);
    ReleaseStaticIpRequestPrivate(const ReleaseStaticIpRequestPrivate &other,
                                   ReleaseStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
