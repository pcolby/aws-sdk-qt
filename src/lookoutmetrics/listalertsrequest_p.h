// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSREQUEST_P_H
#define QTAWS_LISTALERTSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listalertsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAlertsRequest;

class ListAlertsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListAlertsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListAlertsRequest * const q);
    ListAlertsRequestPrivate(const ListAlertsRequestPrivate &other,
                                   ListAlertsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlertsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
