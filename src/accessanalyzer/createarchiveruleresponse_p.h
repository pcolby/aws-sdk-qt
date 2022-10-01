// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVERULERESPONSE_P_H
#define QTAWS_CREATEARCHIVERULERESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateArchiveRuleResponse;

class CreateArchiveRuleResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit CreateArchiveRuleResponsePrivate(CreateArchiveRuleResponse * const q);

    void parseCreateArchiveRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateArchiveRuleResponse)
    Q_DISABLE_COPY(CreateArchiveRuleResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
