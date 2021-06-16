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

#ifndef QTAWS_GETWEBACLFORRESOURCEREQUEST_P_H
#define QTAWS_GETWEBACLFORRESOURCEREQUEST_P_H

#include "wafv2request_p.h"
#include "getwebaclforresourcerequest.h"

namespace QtAws {
namespace WAFV2 {

class GetWebACLForResourceRequest;

class QTAWS_EXPORT GetWebACLForResourceRequestPrivate : public Wafv2RequestPrivate {

public:
    GetWebACLForResourceRequestPrivate(const Wafv2Request::Action action,
                                   GetWebACLForResourceRequest * const q);
    GetWebACLForResourceRequestPrivate(const GetWebACLForResourceRequestPrivate &other,
                                   GetWebACLForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWebACLForResourceRequest)

};

} // namespace WAFV2
} // namespace QtAws

#endif
