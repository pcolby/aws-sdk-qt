// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHORGANIZATIONINSIGHTSRESPONSE_P_H
#define QTAWS_SEARCHORGANIZATIONINSIGHTSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchOrganizationInsightsResponse;

class SearchOrganizationInsightsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit SearchOrganizationInsightsResponsePrivate(SearchOrganizationInsightsResponse * const q);

    void parseSearchOrganizationInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchOrganizationInsightsResponse)
    Q_DISABLE_COPY(SearchOrganizationInsightsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
