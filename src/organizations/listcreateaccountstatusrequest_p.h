/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_P_H
#define QTAWS_LISTCREATEACCOUNTSTATUSREQUEST_P_H

#include "organizations_p.h"
#include "listcreateaccountstatusrequest.h"

namespace AWS {

namespace Organizations {

class ListCreateAccountStatusRequest;

class QTAWS_EXPORT ListCreateAccountStatusRequestPrivate : public OrganizationsPrivate {

public:
    ListCreateAccountStatusRequestPrivate(const Organizations::Action action,
                                   ListCreateAccountStatusRequest * const q);
    ListCreateAccountStatusRequestPrivate(const ListCreateAccountStatusRequestPrivate &other,
                                   ListCreateAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCreateAccountStatusRequest)

};

} // namespace Organizations
} // namespace AWS

#endif
