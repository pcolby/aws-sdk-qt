// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRXNORMINFERENCEJOBREQUEST_P_H
#define QTAWS_STOPRXNORMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "stoprxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopRxNormInferenceJobRequest;

class StopRxNormInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StopRxNormInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StopRxNormInferenceJobRequest * const q);
    StopRxNormInferenceJobRequestPrivate(const StopRxNormInferenceJobRequestPrivate &other,
                                   StopRxNormInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
