// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYRESOLUTIONJOBREQUEST_P_H
#define QTAWS_GETIDENTITYRESOLUTIONJOBREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getidentityresolutionjobrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIdentityResolutionJobRequest;

class GetIdentityResolutionJobRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetIdentityResolutionJobRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetIdentityResolutionJobRequest * const q);
    GetIdentityResolutionJobRequestPrivate(const GetIdentityResolutionJobRequestPrivate &other,
                                   GetIdentityResolutionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityResolutionJobRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
