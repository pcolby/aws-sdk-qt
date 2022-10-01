// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPOLICYGENERATIONRESPONSE_P_H
#define QTAWS_STARTPOLICYGENERATIONRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartPolicyGenerationResponse;

class StartPolicyGenerationResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit StartPolicyGenerationResponsePrivate(StartPolicyGenerationResponse * const q);

    void parseStartPolicyGenerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPolicyGenerationResponse)
    Q_DISABLE_COPY(StartPolicyGenerationResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
