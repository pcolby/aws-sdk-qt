// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERULEREQUEST_P_H
#define QTAWS_DELETEARCHIVERULEREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "deletearchiverulerequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteArchiveRuleRequest;

class DeleteArchiveRuleRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    DeleteArchiveRuleRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   DeleteArchiveRuleRequest * const q);
    DeleteArchiveRuleRequestPrivate(const DeleteArchiveRuleRequestPrivate &other,
                                   DeleteArchiveRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
