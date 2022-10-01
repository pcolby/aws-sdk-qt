// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTRUSTEDADVISORCHECKRESPONSE_P_H
#define QTAWS_REFRESHTRUSTEDADVISORCHECKRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class RefreshTrustedAdvisorCheckResponse;

class RefreshTrustedAdvisorCheckResponsePrivate : public SupportResponsePrivate {

public:

    explicit RefreshTrustedAdvisorCheckResponsePrivate(RefreshTrustedAdvisorCheckResponse * const q);

    void parseRefreshTrustedAdvisorCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RefreshTrustedAdvisorCheckResponse)
    Q_DISABLE_COPY(RefreshTrustedAdvisorCheckResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
