// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEADDONVERSIONSREQUEST_P_H

#include "eksrequest_p.h"
#include "describeaddonversionsrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonVersionsRequest;

class DescribeAddonVersionsRequestPrivate : public EksRequestPrivate {

public:
    DescribeAddonVersionsRequestPrivate(const EksRequest::Action action,
                                   DescribeAddonVersionsRequest * const q);
    DescribeAddonVersionsRequestPrivate(const DescribeAddonVersionsRequestPrivate &other,
                                   DescribeAddonVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddonVersionsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
