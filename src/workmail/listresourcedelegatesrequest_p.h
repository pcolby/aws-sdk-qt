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

#ifndef QTAWS_LISTRESOURCEDELEGATESREQUEST_P_H
#define QTAWS_LISTRESOURCEDELEGATESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listresourcedelegatesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListResourceDelegatesRequest;

class QTAWS_EXPORT ListResourceDelegatesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListResourceDelegatesRequestPrivate(const WorkMail::Action action,
                                   ListResourceDelegatesRequest * const q);
    ListResourceDelegatesRequestPrivate(const ListResourceDelegatesRequestPrivate &other,
                                   ListResourceDelegatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceDelegatesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
