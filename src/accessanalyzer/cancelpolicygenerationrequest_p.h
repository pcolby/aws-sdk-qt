// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPOLICYGENERATIONREQUEST_P_H
#define QTAWS_CANCELPOLICYGENERATIONREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "cancelpolicygenerationrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CancelPolicyGenerationRequest;

class CancelPolicyGenerationRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    CancelPolicyGenerationRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   CancelPolicyGenerationRequest * const q);
    CancelPolicyGenerationRequestPrivate(const CancelPolicyGenerationRequestPrivate &other,
                                   CancelPolicyGenerationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelPolicyGenerationRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
