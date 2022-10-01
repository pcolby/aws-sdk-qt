// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANALYZEDRESOURCERESPONSE_P_H
#define QTAWS_GETANALYZEDRESOURCERESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAnalyzedResourceResponse;

class GetAnalyzedResourceResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetAnalyzedResourceResponsePrivate(GetAnalyzedResourceResponse * const q);

    void parseGetAnalyzedResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnalyzedResourceResponse)
    Q_DISABLE_COPY(GetAnalyzedResourceResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
