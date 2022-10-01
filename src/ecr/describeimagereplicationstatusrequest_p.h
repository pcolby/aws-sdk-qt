// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSREQUEST_P_H

#include "ecrrequest_p.h"
#include "describeimagereplicationstatusrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageReplicationStatusRequest;

class DescribeImageReplicationStatusRequestPrivate : public EcrRequestPrivate {

public:
    DescribeImageReplicationStatusRequestPrivate(const EcrRequest::Action action,
                                   DescribeImageReplicationStatusRequest * const q);
    DescribeImageReplicationStatusRequestPrivate(const DescribeImageReplicationStatusRequestPrivate &other,
                                   DescribeImageReplicationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageReplicationStatusRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
