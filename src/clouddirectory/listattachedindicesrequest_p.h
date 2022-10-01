// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDINDICESREQUEST_P_H
#define QTAWS_LISTATTACHEDINDICESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listattachedindicesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAttachedIndicesRequest;

class ListAttachedIndicesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListAttachedIndicesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListAttachedIndicesRequest * const q);
    ListAttachedIndicesRequestPrivate(const ListAttachedIndicesRequestPrivate &other,
                                   ListAttachedIndicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttachedIndicesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
