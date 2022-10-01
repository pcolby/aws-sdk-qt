// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETSREQUEST_P_H
#define QTAWS_LISTASSETSREQUEST_P_H

#include "outpostsrequest_p.h"
#include "listassetsrequest.h"

namespace QtAws {
namespace Outposts {

class ListAssetsRequest;

class ListAssetsRequestPrivate : public OutpostsRequestPrivate {

public:
    ListAssetsRequestPrivate(const OutpostsRequest::Action action,
                                   ListAssetsRequest * const q);
    ListAssetsRequestPrivate(const ListAssetsRequestPrivate &other,
                                   ListAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssetsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
