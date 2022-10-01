// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPARENTSREQUEST_P_H
#define QTAWS_LISTOBJECTPARENTSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listobjectparentsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectParentsRequest;

class ListObjectParentsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListObjectParentsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListObjectParentsRequest * const q);
    ListObjectParentsRequestPrivate(const ListObjectParentsRequestPrivate &other,
                                   ListObjectParentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObjectParentsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
