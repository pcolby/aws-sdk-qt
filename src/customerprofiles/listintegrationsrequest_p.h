// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONSREQUEST_P_H
#define QTAWS_LISTINTEGRATIONSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listintegrationsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIntegrationsRequest;

class ListIntegrationsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListIntegrationsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListIntegrationsRequest * const q);
    ListIntegrationsRequestPrivate(const ListIntegrationsRequestPrivate &other,
                                   ListIntegrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIntegrationsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
