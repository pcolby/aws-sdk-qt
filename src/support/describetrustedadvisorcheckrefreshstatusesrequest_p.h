// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESREQUEST_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESREQUEST_P_H

#include "supportrequest_p.h"
#include "describetrustedadvisorcheckrefreshstatusesrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckRefreshStatusesRequest;

class DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate : public SupportRequestPrivate {

public:
    DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(const SupportRequest::Action action,
                                   DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q);
    DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(const DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate &other,
                                   DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckRefreshStatusesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
