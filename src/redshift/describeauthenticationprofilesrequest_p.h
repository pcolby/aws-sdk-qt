// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHENTICATIONPROFILESREQUEST_P_H
#define QTAWS_DESCRIBEAUTHENTICATIONPROFILESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeauthenticationprofilesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeAuthenticationProfilesRequest;

class DescribeAuthenticationProfilesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeAuthenticationProfilesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeAuthenticationProfilesRequest * const q);
    DescribeAuthenticationProfilesRequestPrivate(const DescribeAuthenticationProfilesRequestPrivate &other,
                                   DescribeAuthenticationProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuthenticationProfilesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
