// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISSCHEMERESPONSE_P_H
#define QTAWS_DELETEANALYSISSCHEMERESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DeleteAnalysisSchemeResponse;

class DeleteAnalysisSchemeResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DeleteAnalysisSchemeResponsePrivate(DeleteAnalysisSchemeResponse * const q);

    void parseDeleteAnalysisSchemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnalysisSchemeResponse)
    Q_DISABLE_COPY(DeleteAnalysisSchemeResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
