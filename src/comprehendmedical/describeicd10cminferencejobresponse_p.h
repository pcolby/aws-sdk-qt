// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEICD10CMINFERENCEJOBRESPONSE_P_H
#define QTAWS_DESCRIBEICD10CMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeICD10CMInferenceJobResponse;

class DescribeICD10CMInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DescribeICD10CMInferenceJobResponsePrivate(DescribeICD10CMInferenceJobResponse * const q);

    void parseDescribeICD10CMInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(DescribeICD10CMInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
