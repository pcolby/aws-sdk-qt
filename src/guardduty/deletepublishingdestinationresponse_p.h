// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLISHINGDESTINATIONRESPONSE_P_H
#define QTAWS_DELETEPUBLISHINGDESTINATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeletePublishingDestinationResponse;

class DeletePublishingDestinationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeletePublishingDestinationResponsePrivate(DeletePublishingDestinationResponse * const q);

    void parseDeletePublishingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePublishingDestinationResponse)
    Q_DISABLE_COPY(DeletePublishingDestinationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
