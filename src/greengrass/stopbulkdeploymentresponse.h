// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBULKDEPLOYMENTRESPONSE_H
#define QTAWS_STOPBULKDEPLOYMENTRESPONSE_H

#include "greengrassresponse.h"
#include "stopbulkdeploymentrequest.h"

namespace QtAws {
namespace Greengrass {

class StopBulkDeploymentResponsePrivate;

class QTAWSGREENGRASS_EXPORT StopBulkDeploymentResponse : public GreengrassResponse {
    Q_OBJECT

public:
    StopBulkDeploymentResponse(const StopBulkDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBulkDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBulkDeploymentResponse)
    Q_DISABLE_COPY(StopBulkDeploymentResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
