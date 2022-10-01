// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORORGANIZATIONREQUEST_P_H
#define QTAWS_LISTHANDSHAKESFORORGANIZATIONREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listhandshakesfororganizationrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForOrganizationRequest;

class ListHandshakesForOrganizationRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListHandshakesForOrganizationRequestPrivate(const OrganizationsRequest::Action action,
                                   ListHandshakesForOrganizationRequest * const q);
    ListHandshakesForOrganizationRequestPrivate(const ListHandshakesForOrganizationRequestPrivate &other,
                                   ListHandshakesForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHandshakesForOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
