// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTREQUEST_P_H
#define QTAWS_CREATEALERTREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "createalertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAlertRequest;

class CreateAlertRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    CreateAlertRequestPrivate(const LookoutMetricsRequest::Action action,
                                   CreateAlertRequest * const q);
    CreateAlertRequestPrivate(const CreateAlertRequestPrivate &other,
                                   CreateAlertRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
