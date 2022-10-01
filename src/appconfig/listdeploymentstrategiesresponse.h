// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSTRATEGIESRESPONSE_H
#define QTAWS_LISTDEPLOYMENTSTRATEGIESRESPONSE_H

#include "appconfigresponse.h"
#include "listdeploymentstrategiesrequest.h"

namespace QtAws {
namespace AppConfig {

class ListDeploymentStrategiesResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ListDeploymentStrategiesResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ListDeploymentStrategiesResponse(const ListDeploymentStrategiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentStrategiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentStrategiesResponse)
    Q_DISABLE_COPY(ListDeploymentStrategiesResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
