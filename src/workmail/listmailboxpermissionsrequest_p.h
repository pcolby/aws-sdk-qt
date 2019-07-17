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

#ifndef QTAWS_LISTMAILBOXPERMISSIONSREQUEST_P_H
#define QTAWS_LISTMAILBOXPERMISSIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxPermissionsRequest;

class QTAWS_EXPORT ListMailboxPermissionsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMailboxPermissionsRequestPrivate(const WorkMailRequest::Action action,
                                   ListMailboxPermissionsRequest * const q);
    ListMailboxPermissionsRequestPrivate(const ListMailboxPermissionsRequestPrivate &other,
                                   ListMailboxPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMailboxPermissionsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
