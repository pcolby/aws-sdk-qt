// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHEDSCHEMAARNSREQUEST_P_H
#define QTAWS_LISTPUBLISHEDSCHEMAARNSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listpublishedschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListPublishedSchemaArnsRequest;

class ListPublishedSchemaArnsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListPublishedSchemaArnsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListPublishedSchemaArnsRequest * const q);
    ListPublishedSchemaArnsRequestPrivate(const ListPublishedSchemaArnsRequestPrivate &other,
                                   ListPublishedSchemaArnsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPublishedSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
