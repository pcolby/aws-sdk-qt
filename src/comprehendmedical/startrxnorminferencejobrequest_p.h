// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRXNORMINFERENCEJOBREQUEST_P_H
#define QTAWS_STARTRXNORMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "startrxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartRxNormInferenceJobRequest;

class StartRxNormInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StartRxNormInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StartRxNormInferenceJobRequest * const q);
    StartRxNormInferenceJobRequestPrivate(const StartRxNormInferenceJobRequestPrivate &other,
                                   StartRxNormInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
