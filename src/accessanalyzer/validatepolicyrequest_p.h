// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPOLICYREQUEST_P_H
#define QTAWS_VALIDATEPOLICYREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "validatepolicyrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ValidatePolicyRequest;

class ValidatePolicyRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ValidatePolicyRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ValidatePolicyRequest * const q);
    ValidatePolicyRequestPrivate(const ValidatePolicyRequestPrivate &other,
                                   ValidatePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidatePolicyRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
