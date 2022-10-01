// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTINSTANCESRESPONSE_P_H
#define QTAWS_REQUESTSPOTINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotInstancesResponse;

class RequestSpotInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RequestSpotInstancesResponsePrivate(RequestSpotInstancesResponse * const q);

    void parseRequestSpotInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestSpotInstancesResponse)
    Q_DISABLE_COPY(RequestSpotInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
