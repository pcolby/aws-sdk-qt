// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSPATHRESPONSE_P_H
#define QTAWS_DELETENETWORKINSIGHTSPATHRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsPathResponse;

class DeleteNetworkInsightsPathResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInsightsPathResponsePrivate(DeleteNetworkInsightsPathResponse * const q);

    void parseDeleteNetworkInsightsPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsPathResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsPathResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
