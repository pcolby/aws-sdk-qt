// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSREQUEST_P_H
#define QTAWS_LISTORGANIZATIONSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listorganizationsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListOrganizationsRequest;

class ListOrganizationsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListOrganizationsRequestPrivate(const WorkMailRequest::Action action,
                                   ListOrganizationsRequest * const q);
    ListOrganizationsRequestPrivate(const ListOrganizationsRequestPrivate &other,
                                   ListOrganizationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
