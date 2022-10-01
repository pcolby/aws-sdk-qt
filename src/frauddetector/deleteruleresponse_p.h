// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULERESPONSE_P_H
#define QTAWS_DELETERULERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteRuleResponse;

class DeleteRuleResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteRuleResponsePrivate(DeleteRuleResponse * const q);

    void parseDeleteRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRuleResponse)
    Q_DISABLE_COPY(DeleteRuleResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
