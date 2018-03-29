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

#ifndef QTAWS_LISTDIRECTORIESREQUEST_P_H
#define QTAWS_LISTDIRECTORIESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listdirectoriesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDirectoriesRequest;

class QTAWS_EXPORT ListDirectoriesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListDirectoriesRequestPrivate(const CloudDirectory::Action action,
                                   ListDirectoriesRequest * const q);
    ListDirectoriesRequestPrivate(const ListDirectoriesRequestPrivate &other,
                                   ListDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDirectoriesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
