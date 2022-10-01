// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTPATHSREQUEST_P_H
#define QTAWS_LISTOBJECTPARENTPATHSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listobjectparentpathsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentPathsRequest;

class ListObjectParentPathsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListObjectParentPathsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListObjectParentPathsRequest * const q);
    ListObjectParentPathsRequestPrivate(const ListObjectParentPathsRequestPrivate &other,
                                   ListObjectParentPathsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectParentPathsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
