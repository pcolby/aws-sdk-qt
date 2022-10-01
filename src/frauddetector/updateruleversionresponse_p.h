// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEVERSIONRESPONSE_P_H
#define QTAWS_UPDATERULEVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleVersionResponse;

class UpdateRuleVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateRuleVersionResponsePrivate(UpdateRuleVersionResponse * const q);

    void parseUpdateRuleVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuleVersionResponse)
    Q_DISABLE_COPY(UpdateRuleVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
