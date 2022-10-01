// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETATTRIBUTESREQUEST_P_H
#define QTAWS_LISTFACETATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listfacetattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetAttributesRequest;

class ListFacetAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListFacetAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListFacetAttributesRequest * const q);
    ListFacetAttributesRequestPrivate(const ListFacetAttributesRequestPrivate &other,
                                   ListFacetAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFacetAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
