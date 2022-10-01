// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNOMEDCTINFERENCEJOBREQUEST_P_H
#define QTAWS_DESCRIBESNOMEDCTINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "describesnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeSNOMEDCTInferenceJobRequest;

class DescribeSNOMEDCTInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DescribeSNOMEDCTInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DescribeSNOMEDCTInferenceJobRequest * const q);
    DescribeSNOMEDCTInferenceJobRequestPrivate(const DescribeSNOMEDCTInferenceJobRequestPrivate &other,
                                   DescribeSNOMEDCTInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
