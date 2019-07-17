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

#ifndef QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H
#define QTAWS_GETOBJECTATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectAttributesRequest;

class QTAWS_EXPORT GetObjectAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetObjectAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetObjectAttributesRequest * const q);
    GetObjectAttributesRequestPrivate(const GetObjectAttributesRequestPrivate &other,
                                   GetObjectAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
