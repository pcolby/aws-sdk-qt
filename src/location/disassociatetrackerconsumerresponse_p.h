// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRACKERCONSUMERRESPONSE_P_H
#define QTAWS_DISASSOCIATETRACKERCONSUMERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DisassociateTrackerConsumerResponse;

class DisassociateTrackerConsumerResponsePrivate : public LocationResponsePrivate {

public:

    explicit DisassociateTrackerConsumerResponsePrivate(DisassociateTrackerConsumerResponse * const q);

    void parseDisassociateTrackerConsumerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTrackerConsumerResponse)
    Q_DISABLE_COPY(DisassociateTrackerConsumerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
