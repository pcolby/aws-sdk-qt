// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICERESPONSE_H
#define QTAWS_CREATECONTAINERSERVICERESPONSE_H

#include "lightsailresponse.h"
#include "createcontainerservicerequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateContainerServiceResponse(const CreateContainerServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContainerServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceResponse)
    Q_DISABLE_COPY(CreateContainerServiceResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
