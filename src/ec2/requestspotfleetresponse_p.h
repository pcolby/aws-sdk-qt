// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTFLEETRESPONSE_P_H
#define QTAWS_REQUESTSPOTFLEETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotFleetResponse;

class RequestSpotFleetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RequestSpotFleetResponsePrivate(RequestSpotFleetResponse * const q);

    void parseRequestSpotFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestSpotFleetResponse)
    Q_DISABLE_COPY(RequestSpotFleetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
