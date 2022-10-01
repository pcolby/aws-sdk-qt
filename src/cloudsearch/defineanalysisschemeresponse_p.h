// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEANALYSISSCHEMERESPONSE_P_H
#define QTAWS_DEFINEANALYSISSCHEMERESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DefineAnalysisSchemeResponse;

class DefineAnalysisSchemeResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DefineAnalysisSchemeResponsePrivate(DefineAnalysisSchemeResponse * const q);

    void parseDefineAnalysisSchemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DefineAnalysisSchemeResponse)
    Q_DISABLE_COPY(DefineAnalysisSchemeResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
