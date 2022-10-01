// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTFLEETREQUESTSRESPONSE_P_H
#define QTAWS_CANCELSPOTFLEETREQUESTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotFleetRequestsResponse;

class CancelSpotFleetRequestsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelSpotFleetRequestsResponsePrivate(CancelSpotFleetRequestsResponse * const q);

    void parseCancelSpotFleetRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSpotFleetRequestsResponse)
    Q_DISABLE_COPY(CancelSpotFleetRequestsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
