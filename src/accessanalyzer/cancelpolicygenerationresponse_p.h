// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPOLICYGENERATIONRESPONSE_P_H
#define QTAWS_CANCELPOLICYGENERATIONRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class CancelPolicyGenerationResponse;

class CancelPolicyGenerationResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit CancelPolicyGenerationResponsePrivate(CancelPolicyGenerationResponse * const q);

    void parseCancelPolicyGenerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelPolicyGenerationResponse)
    Q_DISABLE_COPY(CancelPolicyGenerationResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
