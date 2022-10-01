// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSNOMEDCTINFERENCEJOBREQUEST_P_H
#define QTAWS_STOPSNOMEDCTINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "stopsnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopSNOMEDCTInferenceJobRequest;

class StopSNOMEDCTInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StopSNOMEDCTInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StopSNOMEDCTInferenceJobRequest * const q);
    StopSNOMEDCTInferenceJobRequestPrivate(const StopSNOMEDCTInferenceJobRequestPrivate &other,
                                   StopSNOMEDCTInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
