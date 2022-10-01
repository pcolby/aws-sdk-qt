// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTATUSRESPONSE_H
#define QTAWS_GETDEPLOYMENTSTATUSRESPONSE_H

#include "greengrassresponse.h"
#include "getdeploymentstatusrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeploymentStatusResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetDeploymentStatusResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetDeploymentStatusResponse(const GetDeploymentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentStatusResponse)
    Q_DISABLE_COPY(GetDeploymentStatusResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
