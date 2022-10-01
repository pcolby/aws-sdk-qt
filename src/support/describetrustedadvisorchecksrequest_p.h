// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSREQUEST_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSREQUEST_P_H

#include "supportrequest_p.h"
#include "describetrustedadvisorchecksrequest.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorChecksRequest;

class DescribeTrustedAdvisorChecksRequestPrivate : public SupportRequestPrivate {

public:
    DescribeTrustedAdvisorChecksRequestPrivate(const SupportRequest::Action action,
                                   DescribeTrustedAdvisorChecksRequest * const q);
    DescribeTrustedAdvisorChecksRequestPrivate(const DescribeTrustedAdvisorChecksRequestPrivate &other,
                                   DescribeTrustedAdvisorChecksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorChecksRequest)

};

} // namespace Support
} // namespace QtAws

#endif
