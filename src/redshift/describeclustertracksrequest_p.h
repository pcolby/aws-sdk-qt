// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERTRACKSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERTRACKSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclustertracksrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterTracksRequest;

class DescribeClusterTracksRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterTracksRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterTracksRequest * const q);
    DescribeClusterTracksRequestPrivate(const DescribeClusterTracksRequestPrivate &other,
                                   DescribeClusterTracksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterTracksRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
