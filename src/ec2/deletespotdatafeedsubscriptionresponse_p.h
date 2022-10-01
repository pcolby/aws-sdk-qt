// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteSpotDatafeedSubscriptionResponse;

class DeleteSpotDatafeedSubscriptionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteSpotDatafeedSubscriptionResponsePrivate(DeleteSpotDatafeedSubscriptionResponse * const q);

    void parseDeleteSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(DeleteSpotDatafeedSubscriptionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
