// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDFLEETSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDFLEETSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "listassociatedfleetsrequest.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedFleetsRequest;

class ListAssociatedFleetsRequestPrivate : public AppStreamRequestPrivate {

public:
    ListAssociatedFleetsRequestPrivate(const AppStreamRequest::Action action,
                                   ListAssociatedFleetsRequest * const q);
    ListAssociatedFleetsRequestPrivate(const ListAssociatedFleetsRequestPrivate &other,
                                   ListAssociatedFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedFleetsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
