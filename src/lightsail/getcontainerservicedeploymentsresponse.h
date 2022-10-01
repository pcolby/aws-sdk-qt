// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEDEPLOYMENTSRESPONSE_H
#define QTAWS_GETCONTAINERSERVICEDEPLOYMENTSRESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerservicedeploymentsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceDeploymentsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServiceDeploymentsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerServiceDeploymentsResponse(const GetContainerServiceDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerServiceDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServiceDeploymentsResponse)
    Q_DISABLE_COPY(GetContainerServiceDeploymentsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
