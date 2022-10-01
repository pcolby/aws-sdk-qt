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

#ifndef QTAWS_DELETECONTACTLISTREQUEST_P_H
#define QTAWS_DELETECONTACTLISTREQUEST_P_H

#include "sesv2request_p.h"
#include "deletecontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactListRequest;

class DeleteContactListRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteContactListRequestPrivate(const SESv2Request::Action action,
                                   DeleteContactListRequest * const q);
    DeleteContactListRequestPrivate(const DeleteContactListRequestPrivate &other,
                                   DeleteContactListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
