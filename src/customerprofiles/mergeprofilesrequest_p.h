// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPROFILESREQUEST_P_H
#define QTAWS_MERGEPROFILESREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "mergeprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class MergeProfilesRequest;

class MergeProfilesRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    MergeProfilesRequestPrivate(const CustomerProfilesRequest::Action action,
                                   MergeProfilesRequest * const q);
    MergeProfilesRequestPrivate(const MergeProfilesRequestPrivate &other,
                                   MergeProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergeProfilesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
