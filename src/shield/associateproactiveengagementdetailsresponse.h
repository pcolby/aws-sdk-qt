// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSRESPONSE_H
#define QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSRESPONSE_H

#include "shieldresponse.h"
#include "associateproactiveengagementdetailsrequest.h"

namespace QtAws {
namespace Shield {

class AssociateProactiveEngagementDetailsResponsePrivate;

class QTAWSSHIELD_EXPORT AssociateProactiveEngagementDetailsResponse : public ShieldResponse {
    Q_OBJECT

public:
    AssociateProactiveEngagementDetailsResponse(const AssociateProactiveEngagementDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateProactiveEngagementDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateProactiveEngagementDetailsResponse)
    Q_DISABLE_COPY(AssociateProactiveEngagementDetailsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
