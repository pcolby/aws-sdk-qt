// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALERTREQUEST_P_H
#define QTAWS_UPDATEALERTREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "updatealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAlertRequest;

class UpdateAlertRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    UpdateAlertRequestPrivate(const LookoutMetricsRequest::Action action,
                                   UpdateAlertRequest * const q);
    UpdateAlertRequestPrivate(const UpdateAlertRequestPrivate &other,
                                   UpdateAlertRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
