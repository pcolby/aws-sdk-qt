// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATEREQUEST_H
#define QTAWS_GETFLOWLOGSINTEGRATIONTEMPLATEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetFlowLogsIntegrationTemplateRequestPrivate;

class QTAWSEC2_EXPORT GetFlowLogsIntegrationTemplateRequest : public Ec2Request {

public:
    GetFlowLogsIntegrationTemplateRequest(const GetFlowLogsIntegrationTemplateRequest &other);
    GetFlowLogsIntegrationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFlowLogsIntegrationTemplateRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
