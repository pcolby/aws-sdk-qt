// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEPOWERSRESPONSE_H
#define QTAWS_GETCONTAINERSERVICEPOWERSRESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerservicepowersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicePowersResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServicePowersResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerServicePowersResponse(const GetContainerServicePowersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerServicePowersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServicePowersResponse)
    Q_DISABLE_COPY(GetContainerServicePowersResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
