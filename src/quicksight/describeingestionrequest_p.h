// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINGESTIONREQUEST_P_H
#define QTAWS_DESCRIBEINGESTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIngestionRequest;

class DescribeIngestionRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeIngestionRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeIngestionRequest * const q);
    DescribeIngestionRequestPrivate(const DescribeIngestionRequestPrivate &other,
                                   DescribeIngestionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
