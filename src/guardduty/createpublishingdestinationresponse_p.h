// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLISHINGDESTINATIONRESPONSE_P_H
#define QTAWS_CREATEPUBLISHINGDESTINATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreatePublishingDestinationResponse;

class CreatePublishingDestinationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreatePublishingDestinationResponsePrivate(CreatePublishingDestinationResponse * const q);

    void parseCreatePublishingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePublishingDestinationResponse)
    Q_DISABLE_COPY(CreatePublishingDestinationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
