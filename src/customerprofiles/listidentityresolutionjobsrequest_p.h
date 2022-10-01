// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYRESOLUTIONJOBSREQUEST_P_H
#define QTAWS_LISTIDENTITYRESOLUTIONJOBSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listidentityresolutionjobsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIdentityResolutionJobsRequest;

class ListIdentityResolutionJobsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListIdentityResolutionJobsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListIdentityResolutionJobsRequest * const q);
    ListIdentityResolutionJobsRequestPrivate(const ListIdentityResolutionJobsRequestPrivate &other,
                                   ListIdentityResolutionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityResolutionJobsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
