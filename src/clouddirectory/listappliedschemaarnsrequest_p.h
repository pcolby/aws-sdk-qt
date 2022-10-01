// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLIEDSCHEMAARNSREQUEST_P_H
#define QTAWS_LISTAPPLIEDSCHEMAARNSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listappliedschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAppliedSchemaArnsRequest;

class ListAppliedSchemaArnsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListAppliedSchemaArnsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListAppliedSchemaArnsRequest * const q);
    ListAppliedSchemaArnsRequestPrivate(const ListAppliedSchemaArnsRequestPrivate &other,
                                   ListAppliedSchemaArnsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppliedSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
