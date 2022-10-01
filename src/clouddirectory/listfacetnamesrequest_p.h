// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETNAMESREQUEST_P_H
#define QTAWS_LISTFACETNAMESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listfacetnamesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetNamesRequest;

class ListFacetNamesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListFacetNamesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListFacetNamesRequest * const q);
    ListFacetNamesRequestPrivate(const ListFacetNamesRequestPrivate &other,
                                   ListFacetNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFacetNamesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
