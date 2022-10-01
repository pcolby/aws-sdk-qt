// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESRESPONSE_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSUMMARIESRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckSummariesResponse;

class DescribeTrustedAdvisorCheckSummariesResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeTrustedAdvisorCheckSummariesResponsePrivate(DescribeTrustedAdvisorCheckSummariesResponse * const q);

    void parseDescribeTrustedAdvisorCheckSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckSummariesResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckSummariesResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
