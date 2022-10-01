// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARENTSREQUEST_P_H
#define QTAWS_LISTPARENTSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listparentsrequest.h"

namespace QtAws {
namespace Organizations {

class ListParentsRequest;

class ListParentsRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListParentsRequestPrivate(const OrganizationsRequest::Action action,
                                   ListParentsRequest * const q);
    ListParentsRequestPrivate(const ListParentsRequestPrivate &other,
                                   ListParentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListParentsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
