// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCOMINGTYPEDLINKSREQUEST_P_H
#define QTAWS_LISTINCOMINGTYPEDLINKSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listincomingtypedlinksrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListIncomingTypedLinksRequest;

class ListIncomingTypedLinksRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListIncomingTypedLinksRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListIncomingTypedLinksRequest * const q);
    ListIncomingTypedLinksRequestPrivate(const ListIncomingTypedLinksRequestPrivate &other,
                                   ListIncomingTypedLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIncomingTypedLinksRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
