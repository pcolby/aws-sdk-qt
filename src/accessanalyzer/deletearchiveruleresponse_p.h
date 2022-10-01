// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERULERESPONSE_P_H
#define QTAWS_DELETEARCHIVERULERESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteArchiveRuleResponse;

class DeleteArchiveRuleResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit DeleteArchiveRuleResponsePrivate(DeleteArchiveRuleResponse * const q);

    void parseDeleteArchiveRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteArchiveRuleResponse)
    Q_DISABLE_COPY(DeleteArchiveRuleResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
