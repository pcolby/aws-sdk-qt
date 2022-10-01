// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCESRESPONSE_P_H
#define QTAWS_TERMINATEINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class TerminateInstancesResponse;

class TerminateInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit TerminateInstancesResponsePrivate(TerminateInstancesResponse * const q);

    void parseTerminateInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateInstancesResponse)
    Q_DISABLE_COPY(TerminateInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
