// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESRESPONSE_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKREFRESHSTATUSESRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckRefreshStatusesResponse;

class DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate(DescribeTrustedAdvisorCheckRefreshStatusesResponse * const q);

    void parseDescribeTrustedAdvisorCheckRefreshStatusesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckRefreshStatusesResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckRefreshStatusesResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
