// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTANALYZEDRESOURCESRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzedResourcesResponse;

class ListAnalyzedResourcesResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ListAnalyzedResourcesResponsePrivate(ListAnalyzedResourcesResponse * const q);

    void parseListAnalyzedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnalyzedResourcesResponse)
    Q_DISABLE_COPY(ListAnalyzedResourcesResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
