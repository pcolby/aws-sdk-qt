// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONALUNITSFORPARENTREQUEST_P_H
#define QTAWS_LISTORGANIZATIONALUNITSFORPARENTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listorganizationalunitsforparentrequest.h"

namespace QtAws {
namespace Organizations {

class ListOrganizationalUnitsForParentRequest;

class ListOrganizationalUnitsForParentRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListOrganizationalUnitsForParentRequestPrivate(const OrganizationsRequest::Action action,
                                   ListOrganizationalUnitsForParentRequest * const q);
    ListOrganizationalUnitsForParentRequestPrivate(const ListOrganizationalUnitsForParentRequestPrivate &other,
                                   ListOrganizationalUnitsForParentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOrganizationalUnitsForParentRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
