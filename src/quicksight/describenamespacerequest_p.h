// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENAMESPACEREQUEST_P_H
#define QTAWS_DESCRIBENAMESPACEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describenamespacerequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeNamespaceRequest;

class DescribeNamespaceRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeNamespaceRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeNamespaceRequest * const q);
    DescribeNamespaceRequestPrivate(const DescribeNamespaceRequestPrivate &other,
                                   DescribeNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNamespaceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
