// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATERESPONSE_P_H
#define QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetFlowLogsIntegrationTemplateResponse;

class GetFlowLogsIntegrationTemplateResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetFlowLogsIntegrationTemplateResponsePrivate(GetFlowLogsIntegrationTemplateResponse * const q);

    void parseGetFlowLogsIntegrationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFlowLogsIntegrationTemplateResponse)
    Q_DISABLE_COPY(GetFlowLogsIntegrationTemplateResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
