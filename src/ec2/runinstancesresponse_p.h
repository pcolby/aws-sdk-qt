// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNINSTANCESRESPONSE_P_H
#define QTAWS_RUNINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RunInstancesResponse;

class RunInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RunInstancesResponsePrivate(RunInstancesResponse * const q);

    void parseRunInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunInstancesResponse)
    Q_DISABLE_COPY(RunInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
