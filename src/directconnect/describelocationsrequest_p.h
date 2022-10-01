// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSREQUEST_P_H
#define QTAWS_DESCRIBELOCATIONSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describelocationsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLocationsRequest;

class DescribeLocationsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeLocationsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeLocationsRequest * const q);
    DescribeLocationsRequestPrivate(const DescribeLocationsRequestPrivate &other,
                                   DescribeLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
