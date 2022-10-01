// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULESRESPONSE_P_H
#define QTAWS_GETRULESRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetRulesResponse;

class GetRulesResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetRulesResponsePrivate(GetRulesResponse * const q);

    void parseGetRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRulesResponse)
    Q_DISABLE_COPY(GetRulesResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
