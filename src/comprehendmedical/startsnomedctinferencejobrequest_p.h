// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNOMEDCTINFERENCEJOBREQUEST_P_H
#define QTAWS_STARTSNOMEDCTINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "startsnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartSNOMEDCTInferenceJobRequest;

class StartSNOMEDCTInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StartSNOMEDCTInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StartSNOMEDCTInferenceJobRequest * const q);
    StartSNOMEDCTInferenceJobRequestPrivate(const StartSNOMEDCTInferenceJobRequestPrivate &other,
                                   StartSNOMEDCTInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
