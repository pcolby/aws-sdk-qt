// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESUMMARYRESPONSE_P_H
#define QTAWS_GETTEMPLATESUMMARYRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateSummaryResponse;

class GetTemplateSummaryResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit GetTemplateSummaryResponsePrivate(GetTemplateSummaryResponse * const q);

    void parseGetTemplateSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemplateSummaryResponse)
    Q_DISABLE_COPY(GetTemplateSummaryResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
