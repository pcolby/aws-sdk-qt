// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONREQUEST_P_H
#define QTAWS_DESCRIBEADDONREQUEST_P_H

#include "eksrequest_p.h"
#include "describeaddonrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonRequest;

class DescribeAddonRequestPrivate : public EksRequestPrivate {

public:
    DescribeAddonRequestPrivate(const EksRequest::Action action,
                                   DescribeAddonRequest * const q);
    DescribeAddonRequestPrivate(const DescribeAddonRequestPrivate &other,
                                   DescribeAddonRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddonRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
