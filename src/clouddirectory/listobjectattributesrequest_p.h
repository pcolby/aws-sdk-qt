// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTATTRIBUTESREQUEST_P_H
#define QTAWS_LISTOBJECTATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectAttributesRequest;

class ListObjectAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListObjectAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListObjectAttributesRequest * const q);
    ListObjectAttributesRequestPrivate(const ListObjectAttributesRequestPrivate &other,
                                   ListObjectAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
