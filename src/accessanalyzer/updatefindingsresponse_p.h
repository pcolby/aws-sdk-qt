// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSRESPONSE_P_H
#define QTAWS_UPDATEFINDINGSRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateFindingsResponse;

class UpdateFindingsResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit UpdateFindingsResponsePrivate(UpdateFindingsResponse * const q);

    void parseUpdateFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsResponse)
    Q_DISABLE_COPY(UpdateFindingsResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
