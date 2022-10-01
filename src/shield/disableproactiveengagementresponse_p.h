// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROACTIVEENGAGEMENTRESPONSE_P_H
#define QTAWS_DISABLEPROACTIVEENGAGEMENTRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DisableProactiveEngagementResponse;

class DisableProactiveEngagementResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DisableProactiveEngagementResponsePrivate(DisableProactiveEngagementResponse * const q);

    void parseDisableProactiveEngagementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableProactiveEngagementResponse)
    Q_DISABLE_COPY(DisableProactiveEngagementResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
