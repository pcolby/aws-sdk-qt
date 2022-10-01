// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVELOPMENTSCHEMAARNSREQUEST_P_H
#define QTAWS_LISTDEVELOPMENTSCHEMAARNSREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listdevelopmentschemaarnsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDevelopmentSchemaArnsRequest;

class ListDevelopmentSchemaArnsRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListDevelopmentSchemaArnsRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListDevelopmentSchemaArnsRequest * const q);
    ListDevelopmentSchemaArnsRequestPrivate(const ListDevelopmentSchemaArnsRequestPrivate &other,
                                   ListDevelopmentSchemaArnsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevelopmentSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
