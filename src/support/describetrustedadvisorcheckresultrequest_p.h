// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTREQUEST_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTREQUEST_P_H

#include "supportrequest_p.h"
#include "describetrustedadvisorcheckresultrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckResultRequest;

class DescribeTrustedAdvisorCheckResultRequestPrivate : public SupportRequestPrivate {

public:
    DescribeTrustedAdvisorCheckResultRequestPrivate(const SupportRequest::Action action,
                                   DescribeTrustedAdvisorCheckResultRequest * const q);
    DescribeTrustedAdvisorCheckResultRequestPrivate(const DescribeTrustedAdvisorCheckResultRequestPrivate &other,
                                   DescribeTrustedAdvisorCheckResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckResultRequest)

};

} // namespace Support
} // namespace QtAws

#endif
