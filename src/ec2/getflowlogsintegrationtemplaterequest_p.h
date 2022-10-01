// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATEREQUEST_P_H
#define QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATEREQUEST_P_H

#include "ec2request_p.h"
#include "getflowlogsintegrationtemplaterequest.h"

namespace QtAws {
namespace Ec2 {

class GetFlowLogsIntegrationTemplateRequest;

class GetFlowLogsIntegrationTemplateRequestPrivate : public Ec2RequestPrivate {

public:
    GetFlowLogsIntegrationTemplateRequestPrivate(const Ec2Request::Action action,
                                   GetFlowLogsIntegrationTemplateRequest * const q);
    GetFlowLogsIntegrationTemplateRequestPrivate(const GetFlowLogsIntegrationTemplateRequestPrivate &other,
                                   GetFlowLogsIntegrationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFlowLogsIntegrationTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
