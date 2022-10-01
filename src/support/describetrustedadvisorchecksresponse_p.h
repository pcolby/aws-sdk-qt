// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKSRESPONSE_P_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKSRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeTrustedAdvisorChecksResponse;

class DescribeTrustedAdvisorChecksResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeTrustedAdvisorChecksResponsePrivate(DescribeTrustedAdvisorChecksResponse * const q);

    void parseDescribeTrustedAdvisorChecksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrustedAdvisorChecksResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorChecksResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
