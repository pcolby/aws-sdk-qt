// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZERSRESPONSE_P_H
#define QTAWS_LISTANALYZERSRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzersResponse;

class ListAnalyzersResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ListAnalyzersResponsePrivate(ListAnalyzersResponse * const q);

    void parseListAnalyzersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnalyzersResponse)
    Q_DISABLE_COPY(ListAnalyzersResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
