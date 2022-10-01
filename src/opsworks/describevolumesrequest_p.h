// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESREQUEST_P_H
#define QTAWS_DESCRIBEVOLUMESREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describevolumesrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeVolumesRequest;

class DescribeVolumesRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeVolumesRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeVolumesRequest * const q);
    DescribeVolumesRequestPrivate(const DescribeVolumesRequestPrivate &other,
                                   DescribeVolumesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
