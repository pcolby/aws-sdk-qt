// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZERRESPONSE_P_H
#define QTAWS_GETANALYZERRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzerResponse;

class GetAnalyzerResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetAnalyzerResponsePrivate(GetAnalyzerResponse * const q);

    void parseGetAnalyzerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnalyzerResponse)
    Q_DISABLE_COPY(GetAnalyzerResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
