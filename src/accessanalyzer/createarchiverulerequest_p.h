// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVERULEREQUEST_P_H
#define QTAWS_CREATEARCHIVERULEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "createarchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateArchiveRuleRequest;

class CreateArchiveRuleRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    CreateArchiveRuleRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   CreateArchiveRuleRequest * const q);
    CreateArchiveRuleRequestPrivate(const CreateArchiveRuleRequestPrivate &other,
                                   CreateArchiveRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
