// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTPREFERENCESREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTPREFERENCESREQUEST_P_H

#include "efsrequest_p.h"
#include "describeaccountpreferencesrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccountPreferencesRequest;

class DescribeAccountPreferencesRequestPrivate : public EfsRequestPrivate {

public:
    DescribeAccountPreferencesRequestPrivate(const EfsRequest::Action action,
                                   DescribeAccountPreferencesRequest * const q);
    DescribeAccountPreferencesRequestPrivate(const DescribeAccountPreferencesRequestPrivate &other,
                                   DescribeAccountPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountPreferencesRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
