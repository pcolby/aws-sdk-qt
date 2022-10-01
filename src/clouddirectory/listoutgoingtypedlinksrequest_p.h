// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGTYPEDLINKSREQUEST_P_H
#define QTAWS_LISTOUTGOINGTYPEDLINKSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listoutgoingtypedlinksrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListOutgoingTypedLinksRequest;

class ListOutgoingTypedLinksRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListOutgoingTypedLinksRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListOutgoingTypedLinksRequest * const q);
    ListOutgoingTypedLinksRequestPrivate(const ListOutgoingTypedLinksRequestPrivate &other,
                                   ListOutgoingTypedLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOutgoingTypedLinksRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
