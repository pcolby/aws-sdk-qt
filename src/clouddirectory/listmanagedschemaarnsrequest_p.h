// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDSCHEMAARNSREQUEST_P_H
#define QTAWS_LISTMANAGEDSCHEMAARNSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listmanagedschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListManagedSchemaArnsRequest;

class ListManagedSchemaArnsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListManagedSchemaArnsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListManagedSchemaArnsRequest * const q);
    ListManagedSchemaArnsRequestPrivate(const ListManagedSchemaArnsRequestPrivate &other,
                                   ListManagedSchemaArnsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
