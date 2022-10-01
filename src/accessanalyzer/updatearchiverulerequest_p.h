// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERULEREQUEST_P_H
#define QTAWS_UPDATEARCHIVERULEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "updatearchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateArchiveRuleRequest;

class UpdateArchiveRuleRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    UpdateArchiveRuleRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   UpdateArchiveRuleRequest * const q);
    UpdateArchiveRuleRequestPrivate(const UpdateArchiveRuleRequestPrivate &other,
                                   UpdateArchiveRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
