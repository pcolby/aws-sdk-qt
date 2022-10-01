// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSRESPONSE_P_H
#define QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class AssociateProactiveEngagementDetailsResponse;

class AssociateProactiveEngagementDetailsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit AssociateProactiveEngagementDetailsResponsePrivate(AssociateProactiveEngagementDetailsResponse * const q);

    void parseAssociateProactiveEngagementDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateProactiveEngagementDetailsResponse)
    Q_DISABLE_COPY(AssociateProactiveEngagementDetailsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
