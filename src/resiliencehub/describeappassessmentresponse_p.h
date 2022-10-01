// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPASSESSMENTRESPONSE_P_H
#define QTAWS_DESCRIBEAPPASSESSMENTRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppAssessmentResponse;

class DescribeAppAssessmentResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeAppAssessmentResponsePrivate(DescribeAppAssessmentResponse * const q);

    void parseDescribeAppAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppAssessmentResponse)
    Q_DISABLE_COPY(DescribeAppAssessmentResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
