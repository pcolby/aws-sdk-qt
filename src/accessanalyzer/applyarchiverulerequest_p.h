// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYARCHIVERULEREQUEST_P_H
#define QTAWS_APPLYARCHIVERULEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "applyarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ApplyArchiveRuleRequest;

class ApplyArchiveRuleRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ApplyArchiveRuleRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ApplyArchiveRuleRequest * const q);
    ApplyArchiveRuleRequestPrivate(const ApplyArchiveRuleRequestPrivate &other,
                                   ApplyArchiveRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplyArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
