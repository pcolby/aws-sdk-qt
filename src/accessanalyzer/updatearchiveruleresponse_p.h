// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERULERESPONSE_P_H
#define QTAWS_UPDATEARCHIVERULERESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateArchiveRuleResponse;

class UpdateArchiveRuleResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit UpdateArchiveRuleResponsePrivate(UpdateArchiveRuleResponse * const q);

    void parseUpdateArchiveRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateArchiveRuleResponse)
    Q_DISABLE_COPY(UpdateArchiveRuleResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
