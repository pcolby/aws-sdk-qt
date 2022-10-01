// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSANALYSISRESPONSE_P_H
#define QTAWS_DELETENETWORKINSIGHTSANALYSISRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAnalysisResponse;

class DeleteNetworkInsightsAnalysisResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInsightsAnalysisResponsePrivate(DeleteNetworkInsightsAnalysisResponse * const q);

    void parseDeleteNetworkInsightsAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAnalysisResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAnalysisResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
