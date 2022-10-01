// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3RESOURCESREQUEST_P_H
#define QTAWS_LISTS3RESOURCESREQUEST_P_H

#include "macierequest_p.h"
#include "lists3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class ListS3ResourcesRequest;

class ListS3ResourcesRequestPrivate : public MacieRequestPrivate {

public:
    ListS3ResourcesRequestPrivate(const MacieRequest::Action action,
                                   ListS3ResourcesRequest * const q);
    ListS3ResourcesRequestPrivate(const ListS3ResourcesRequestPrivate &other,
                                   ListS3ResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
