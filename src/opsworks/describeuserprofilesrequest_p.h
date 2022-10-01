// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILESREQUEST_P_H
#define QTAWS_DESCRIBEUSERPROFILESREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeuserprofilesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeUserProfilesRequest;

class DescribeUserProfilesRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeUserProfilesRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeUserProfilesRequest * const q);
    DescribeUserProfilesRequestPrivate(const DescribeUserProfilesRequestPrivate &other,
                                   DescribeUserProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserProfilesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
