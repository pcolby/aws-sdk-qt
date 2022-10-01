// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATERESPONSE_H
#define QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATERESPONSE_H

#include "ec2response.h"
#include "getflowlogsintegrationtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class GetFlowLogsIntegrationTemplateResponsePrivate;

class QTAWSEC2_EXPORT GetFlowLogsIntegrationTemplateResponse : public Ec2Response {
    Q_OBJECT

public:
    GetFlowLogsIntegrationTemplateResponse(const GetFlowLogsIntegrationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFlowLogsIntegrationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowLogsIntegrationTemplateResponse)
    Q_DISABLE_COPY(GetFlowLogsIntegrationTemplateResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
