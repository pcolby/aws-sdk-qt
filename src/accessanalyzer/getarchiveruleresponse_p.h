// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHIVERULERESPONSE_P_H
#define QTAWS_GETARCHIVERULERESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetArchiveRuleResponse;

class GetArchiveRuleResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetArchiveRuleResponsePrivate(GetArchiveRuleResponse * const q);

    void parseGetArchiveRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetArchiveRuleResponse)
    Q_DISABLE_COPY(GetArchiveRuleResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
