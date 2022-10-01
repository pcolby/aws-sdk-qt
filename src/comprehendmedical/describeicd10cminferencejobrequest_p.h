// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEICD10CMINFERENCEJOBREQUEST_P_H
#define QTAWS_DESCRIBEICD10CMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "describeicd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeICD10CMInferenceJobRequest;

class DescribeICD10CMInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DescribeICD10CMInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DescribeICD10CMInferenceJobRequest * const q);
    DescribeICD10CMInferenceJobRequestPrivate(const DescribeICD10CMInferenceJobRequestPrivate &other,
                                   DescribeICD10CMInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
