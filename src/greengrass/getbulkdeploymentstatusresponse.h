// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKDEPLOYMENTSTATUSRESPONSE_H
#define QTAWS_GETBULKDEPLOYMENTSTATUSRESPONSE_H

#include "greengrassresponse.h"
#include "getbulkdeploymentstatusrequest.h"

namespace QtAws {
namespace Greengrass {

class GetBulkDeploymentStatusResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetBulkDeploymentStatusResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetBulkDeploymentStatusResponse(const GetBulkDeploymentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBulkDeploymentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBulkDeploymentStatusResponse)
    Q_DISABLE_COPY(GetBulkDeploymentStatusResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
