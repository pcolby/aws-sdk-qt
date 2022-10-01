// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONINSIGHTSRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONINSIGHTSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListOrganizationInsightsResponse;

class ListOrganizationInsightsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListOrganizationInsightsResponsePrivate(ListOrganizationInsightsResponse * const q);

    void parseListOrganizationInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationInsightsResponse)
    Q_DISABLE_COPY(ListOrganizationInsightsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
