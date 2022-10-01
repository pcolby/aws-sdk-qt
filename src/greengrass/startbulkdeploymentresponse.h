// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDEPLOYMENTRESPONSE_H
#define QTAWS_STARTBULKDEPLOYMENTRESPONSE_H

#include "greengrassresponse.h"
#include "startbulkdeploymentrequest.h"

namespace QtAws {
namespace Greengrass {

class StartBulkDeploymentResponsePrivate;

class QTAWSGREENGRASS_EXPORT StartBulkDeploymentResponse : public GreengrassResponse {
    Q_OBJECT

public:
    StartBulkDeploymentResponse(const StartBulkDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBulkDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkDeploymentResponse)
    Q_DISABLE_COPY(StartBulkDeploymentResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
