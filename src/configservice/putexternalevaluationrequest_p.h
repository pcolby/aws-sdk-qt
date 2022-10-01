// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALEVALUATIONREQUEST_P_H
#define QTAWS_PUTEXTERNALEVALUATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "putexternalevaluationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutExternalEvaluationRequest;

class PutExternalEvaluationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutExternalEvaluationRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutExternalEvaluationRequest * const q);
    PutExternalEvaluationRequestPrivate(const PutExternalEvaluationRequestPrivate &other,
                                   PutExternalEvaluationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutExternalEvaluationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
