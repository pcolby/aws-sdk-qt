// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHIVERULEREQUEST_P_H
#define QTAWS_GETARCHIVERULEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "getarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetArchiveRuleRequest;

class GetArchiveRuleRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    GetArchiveRuleRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   GetArchiveRuleRequest * const q);
    GetArchiveRuleRequestPrivate(const GetArchiveRuleRequestPrivate &other,
                                   GetArchiveRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
