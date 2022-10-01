// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINSIGHTSRESPONSE_P_H
#define QTAWS_SEARCHINSIGHTSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchInsightsResponse;

class SearchInsightsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit SearchInsightsResponsePrivate(SearchInsightsResponse * const q);

    void parseSearchInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchInsightsResponse)
    Q_DISABLE_COPY(SearchInsightsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
