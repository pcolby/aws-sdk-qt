// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTINSTANCEREQUESTSRESPONSE_P_H
#define QTAWS_CANCELSPOTINSTANCEREQUESTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotInstanceRequestsResponse;

class CancelSpotInstanceRequestsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelSpotInstanceRequestsResponsePrivate(CancelSpotInstanceRequestsResponse * const q);

    void parseCancelSpotInstanceRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSpotInstanceRequestsResponse)
    Q_DISABLE_COPY(CancelSpotInstanceRequestsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
