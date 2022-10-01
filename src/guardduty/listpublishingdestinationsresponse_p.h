// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHINGDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTPUBLISHINGDESTINATIONSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListPublishingDestinationsResponse;

class ListPublishingDestinationsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListPublishingDestinationsResponsePrivate(ListPublishingDestinationsResponse * const q);

    void parseListPublishingDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPublishingDestinationsResponse)
    Q_DISABLE_COPY(ListPublishingDestinationsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
