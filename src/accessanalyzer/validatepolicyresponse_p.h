// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPOLICYRESPONSE_P_H
#define QTAWS_VALIDATEPOLICYRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ValidatePolicyResponse;

class ValidatePolicyResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ValidatePolicyResponsePrivate(ValidatePolicyResponse * const q);

    void parseValidatePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidatePolicyResponse)
    Q_DISABLE_COPY(ValidatePolicyResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
