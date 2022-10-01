// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorCheckResultResponse;

class DescribeTrustedAdvisorCheckResultResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeTrustedAdvisorCheckResultResponsePrivate(DescribeTrustedAdvisorCheckResultResponse * const q);

    void parseDescribeTrustedAdvisorCheckResultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorCheckResultResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckResultResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
