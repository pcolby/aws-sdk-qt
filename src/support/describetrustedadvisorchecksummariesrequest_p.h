// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESREQUEST_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESREQUEST_P_H

#include "supportrequest_p.h"
#include "describetrustedadvisorchecksummariesrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckSummariesRequest;

class DescribeTrustedAdvisorCheckSummariesRequestPrivate : public SupportRequestPrivate {

public:
    DescribeTrustedAdvisorCheckSummariesRequestPrivate(const SupportRequest::Action action,
                                   DescribeTrustedAdvisorCheckSummariesRequest * const q);
    DescribeTrustedAdvisorCheckSummariesRequestPrivate(const DescribeTrustedAdvisorCheckSummariesRequestPrivate &other,
                                   DescribeTrustedAdvisorCheckSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckSummariesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
