// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTCHILDRENREQUEST_P_H
#define QTAWS_LISTOBJECTCHILDRENREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listobjectchildrenrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectChildrenRequest;

class ListObjectChildrenRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListObjectChildrenRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListObjectChildrenRequest * const q);
    ListObjectChildrenRequestPrivate(const ListObjectChildrenRequestPrivate &other,
                                   ListObjectChildrenRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectChildrenRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
