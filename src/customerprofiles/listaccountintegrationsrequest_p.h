// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTINTEGRATIONSREQUEST_P_H
#define QTAWS_LISTACCOUNTINTEGRATIONSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listaccountintegrationsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListAccountIntegrationsRequest;

class ListAccountIntegrationsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListAccountIntegrationsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListAccountIntegrationsRequest * const q);
    ListAccountIntegrationsRequestPrivate(const ListAccountIntegrationsRequestPrivate &other,
                                   ListAccountIntegrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountIntegrationsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
