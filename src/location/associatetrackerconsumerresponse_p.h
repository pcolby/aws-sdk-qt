// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRACKERCONSUMERRESPONSE_P_H
#define QTAWS_ASSOCIATETRACKERCONSUMERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class AssociateTrackerConsumerResponse;

class AssociateTrackerConsumerResponsePrivate : public LocationResponsePrivate {

public:

    explicit AssociateTrackerConsumerResponsePrivate(AssociateTrackerConsumerResponse * const q);

    void parseAssociateTrackerConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTrackerConsumerResponse)
    Q_DISABLE_COPY(AssociateTrackerConsumerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
