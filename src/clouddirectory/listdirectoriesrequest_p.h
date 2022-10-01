// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIRECTORIESREQUEST_P_H
#define QTAWS_LISTDIRECTORIESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listdirectoriesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDirectoriesRequest;

class ListDirectoriesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListDirectoriesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListDirectoriesRequest * const q);
    ListDirectoriesRequestPrivate(const ListDirectoriesRequestPrivate &other,
                                   ListDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDirectoriesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
