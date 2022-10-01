// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEGROUPREQUEST_P_H
#define QTAWS_DESCRIBENODEGROUPREQUEST_P_H

#include "eksrequest_p.h"
#include "describenodegrouprequest.h"

namespace QtAws {
namespace Eks {

class DescribeNodegroupRequest;

class DescribeNodegroupRequestPrivate : public EksRequestPrivate {

public:
    DescribeNodegroupRequestPrivate(const EksRequest::Action action,
                                   DescribeNodegroupRequest * const q);
    DescribeNodegroupRequestPrivate(const DescribeNodegroupRequestPrivate &other,
                                   DescribeNodegroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
