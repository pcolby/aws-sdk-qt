// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHMETRICSREQUEST_P_H
#define QTAWS_PUBLISHMETRICSREQUEST_P_H

#include "mwaarequest_p.h"
#include "publishmetricsrequest.h"

namespace QtAws {
namespace Mwaa {

class PublishMetricsRequest;

class PublishMetricsRequestPrivate : public MwaaRequestPrivate {

public:
    PublishMetricsRequestPrivate(const MwaaRequest::Action action,
                                   PublishMetricsRequest * const q);
    PublishMetricsRequestPrivate(const PublishMetricsRequestPrivate &other,
                                   PublishMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishMetricsRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
