// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEVERSIONREQUEST_P_H
#define QTAWS_UPDATERULEVERSIONREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updateruleversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleVersionRequest;

class UpdateRuleVersionRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateRuleVersionRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateRuleVersionRequest * const q);
    UpdateRuleVersionRequestPrivate(const UpdateRuleVersionRequestPrivate &other,
                                   UpdateRuleVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
