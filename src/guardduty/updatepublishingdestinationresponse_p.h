// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLISHINGDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEPUBLISHINGDESTINATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UpdatePublishingDestinationResponse;

class UpdatePublishingDestinationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UpdatePublishingDestinationResponsePrivate(UpdatePublishingDestinationResponse * const q);

    void parseUpdatePublishingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePublishingDestinationResponse)
    Q_DISABLE_COPY(UpdatePublishingDestinationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
