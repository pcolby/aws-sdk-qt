// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeapplicationfleetassociationsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationFleetAssociationsRequest;

class DescribeApplicationFleetAssociationsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeApplicationFleetAssociationsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeApplicationFleetAssociationsRequest * const q);
    DescribeApplicationFleetAssociationsRequestPrivate(const DescribeApplicationFleetAssociationsRequestPrivate &other,
                                   DescribeApplicationFleetAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationFleetAssociationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
