// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICESRESPONSE_H
#define QTAWS_GETCONTAINERSERVICESRESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerservicesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServicesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerServicesResponse(const GetContainerServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServicesResponse)
    Q_DISABLE_COPY(GetContainerServicesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
