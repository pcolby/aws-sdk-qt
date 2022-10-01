// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMETRICSETREQUEST_P_H
#define QTAWS_CREATEMETRICSETREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "createmetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateMetricSetRequest;

class CreateMetricSetRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    CreateMetricSetRequestPrivate(const LookoutMetricsRequest::Action action,
                                   CreateMetricSetRequest * const q);
    CreateMetricSetRequestPrivate(const CreateMetricSetRequestPrivate &other,
                                   CreateMetricSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
