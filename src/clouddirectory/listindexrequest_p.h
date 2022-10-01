// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDEXREQUEST_P_H
#define QTAWS_LISTINDEXREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListIndexRequest;

class ListIndexRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListIndexRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListIndexRequest * const q);
    ListIndexRequestPrivate(const ListIndexRequestPrivate &other,
                                   ListIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
