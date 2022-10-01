// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERXNORMINFERENCEJOBREQUEST_P_H
#define QTAWS_DESCRIBERXNORMINFERENCEJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "describerxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeRxNormInferenceJobRequest;

class DescribeRxNormInferenceJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DescribeRxNormInferenceJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DescribeRxNormInferenceJobRequest * const q);
    DescribeRxNormInferenceJobRequestPrivate(const DescribeRxNormInferenceJobRequestPrivate &other,
                                   DescribeRxNormInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
