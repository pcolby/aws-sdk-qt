// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYZERRESPONSE_P_H
#define QTAWS_CREATEANALYZERRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAnalyzerResponse;

class CreateAnalyzerResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit CreateAnalyzerResponsePrivate(CreateAnalyzerResponse * const q);

    void parseCreateAnalyzerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAnalyzerResponse)
    Q_DISABLE_COPY(CreateAnalyzerResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
