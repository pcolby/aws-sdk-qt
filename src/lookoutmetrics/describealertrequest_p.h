// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTREQUEST_P_H
#define QTAWS_DESCRIBEALERTREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "describealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAlertRequest;

class DescribeAlertRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DescribeAlertRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DescribeAlertRequest * const q);
    DescribeAlertRequestPrivate(const DescribeAlertRequestPrivate &other,
                                   DescribeAlertRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
