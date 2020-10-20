/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_GETLINKATTRIBUTESREQUEST_P_H
#define QTAWS_GETLINKATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getlinkattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetLinkAttributesRequest;

class QTAWS_EXPORT GetLinkAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetLinkAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetLinkAttributesRequest * const q);
    GetLinkAttributesRequestPrivate(const GetLinkAttributesRequestPrivate &other,
                                   GetLinkAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLinkAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
