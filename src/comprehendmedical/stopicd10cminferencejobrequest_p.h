// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPICD10CMINFERENCEJOBREQUEST_P_H
#define QTAWS_STOPICD10CMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "stopicd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopICD10CMInferenceJobRequest;

class StopICD10CMInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StopICD10CMInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StopICD10CMInferenceJobRequest * const q);
    StopICD10CMInferenceJobRequestPrivate(const StopICD10CMInferenceJobRequestPrivate &other,
                                   StopICD10CMInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
