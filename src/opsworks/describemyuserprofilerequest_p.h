// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMYUSERPROFILEREQUEST_P_H
#define QTAWS_DESCRIBEMYUSERPROFILEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describemyuserprofilerequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeMyUserProfileRequest;

class DescribeMyUserProfileRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeMyUserProfileRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeMyUserProfileRequest * const q);
    DescribeMyUserProfileRequestPrivate(const DescribeMyUserProfileRequestPrivate &other,
                                   DescribeMyUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMyUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
