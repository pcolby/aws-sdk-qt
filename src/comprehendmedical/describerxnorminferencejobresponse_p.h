// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERXNORMINFERENCEJOBRESPONSE_P_H
#define QTAWS_DESCRIBERXNORMINFERENCEJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeRxNormInferenceJobResponse;

class DescribeRxNormInferenceJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DescribeRxNormInferenceJobResponsePrivate(DescribeRxNormInferenceJobResponse * const q);

    void parseDescribeRxNormInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRxNormInferenceJobResponse)
    Q_DISABLE_COPY(DescribeRxNormInferenceJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
