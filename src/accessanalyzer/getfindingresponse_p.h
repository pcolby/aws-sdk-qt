// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGRESPONSE_P_H
#define QTAWS_GETFINDINGRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetFindingResponse;

class GetFindingResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetFindingResponsePrivate(GetFindingResponse * const q);

    void parseGetFindingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingResponse)
    Q_DISABLE_COPY(GetFindingResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
