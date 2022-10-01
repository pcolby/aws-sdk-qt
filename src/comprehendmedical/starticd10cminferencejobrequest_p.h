// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTICD10CMINFERENCEJOBREQUEST_P_H
#define QTAWS_STARTICD10CMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "starticd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartICD10CMInferenceJobRequest;

class StartICD10CMInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StartICD10CMInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StartICD10CMInferenceJobRequest * const q);
    StartICD10CMInferenceJobRequestPrivate(const StartICD10CMInferenceJobRequestPrivate &other,
                                   StartICD10CMInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
