// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGRULESEVALUATIONREQUEST_P_H
#define QTAWS_STARTCONFIGRULESEVALUATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "startconfigrulesevaluationrequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigRulesEvaluationRequest;

class StartConfigRulesEvaluationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    StartConfigRulesEvaluationRequestPrivate(const ConfigServiceRequest::Action action,
                                   StartConfigRulesEvaluationRequest * const q);
    StartConfigRulesEvaluationRequestPrivate(const StartConfigRulesEvaluationRequestPrivate &other,
                                   StartConfigRulesEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartConfigRulesEvaluationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
