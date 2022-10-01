// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDPOLICYREQUEST_P_H
#define QTAWS_GETGENERATEDPOLICYREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getgeneratedpolicyrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetGeneratedPolicyRequest;

class GetGeneratedPolicyRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetGeneratedPolicyRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetGeneratedPolicyRequest * const q);
    GetGeneratedPolicyRequestPrivate(const GetGeneratedPolicyRequestPrivate &other,
                                   GetGeneratedPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGeneratedPolicyRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
