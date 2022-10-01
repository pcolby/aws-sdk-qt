// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEPERMISSIONSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describepermissionsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribePermissionsRequest;

class DescribePermissionsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribePermissionsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribePermissionsRequest * const q);
    DescribePermissionsRequestPrivate(const DescribePermissionsRequestPrivate &other,
                                   DescribePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePermissionsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
