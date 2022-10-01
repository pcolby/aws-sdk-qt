// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDPOLICYRESPONSE_P_H
#define QTAWS_GETGENERATEDPOLICYRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetGeneratedPolicyResponse;

class GetGeneratedPolicyResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetGeneratedPolicyResponsePrivate(GetGeneratedPolicyResponse * const q);

    void parseGetGeneratedPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeneratedPolicyResponse)
    Q_DISABLE_COPY(GetGeneratedPolicyResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
