// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPOLICYGENERATIONREQUEST_P_H
#define QTAWS_STARTPOLICYGENERATIONREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "startpolicygenerationrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartPolicyGenerationRequest;

class StartPolicyGenerationRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    StartPolicyGenerationRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   StartPolicyGenerationRequest * const q);
    StartPolicyGenerationRequestPrivate(const StartPolicyGenerationRequestPrivate &other,
                                   StartPolicyGenerationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPolicyGenerationRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
