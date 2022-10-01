// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCESRESPONSE_P_H
#define QTAWS_STOPINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class StopInstancesResponse;

class StopInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit StopInstancesResponsePrivate(StopInstancesResponse * const q);

    void parseStopInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopInstancesResponse)
    Q_DISABLE_COPY(StopInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
