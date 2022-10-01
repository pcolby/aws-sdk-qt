// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSPATHRESPONSE_P_H
#define QTAWS_CREATENETWORKINSIGHTSPATHRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsPathResponse;

class CreateNetworkInsightsPathResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNetworkInsightsPathResponsePrivate(CreateNetworkInsightsPathResponse * const q);

    void parseCreateNetworkInsightsPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInsightsPathResponse)
    Q_DISABLE_COPY(CreateNetworkInsightsPathResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
