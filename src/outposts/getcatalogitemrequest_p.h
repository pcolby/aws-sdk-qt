// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGITEMREQUEST_P_H
#define QTAWS_GETCATALOGITEMREQUEST_P_H

#include "outpostsrequest_p.h"
#include "getcatalogitemrequest.h"

namespace QtAws {
namespace Outposts {

class GetCatalogItemRequest;

class GetCatalogItemRequestPrivate : public OutpostsRequestPrivate {

public:
    GetCatalogItemRequestPrivate(const OutpostsRequest::Action action,
                                   GetCatalogItemRequest * const q);
    GetCatalogItemRequestPrivate(const GetCatalogItemRequestPrivate &other,
                                   GetCatalogItemRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCatalogItemRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
