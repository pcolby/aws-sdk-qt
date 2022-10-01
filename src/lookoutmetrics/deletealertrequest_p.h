// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTREQUEST_P_H
#define QTAWS_DELETEALERTREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "deletealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAlertRequest;

class DeleteAlertRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DeleteAlertRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DeleteAlertRequest * const q);
    DeleteAlertRequestPrivate(const DeleteAlertRequestPrivate &other,
                                   DeleteAlertRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
