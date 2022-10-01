// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_P_H
#define QTAWS_DELETERULEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleterulerequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteRuleRequest;

class DeleteRuleRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteRuleRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteRuleRequest * const q);
    DeleteRuleRequestPrivate(const DeleteRuleRequestPrivate &other,
                                   DeleteRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
