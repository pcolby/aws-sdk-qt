// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINRESPONSE_H
#define QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINRESPONSE_H

#include "lightsailresponse.h"
#include "createcontainerserviceregistryloginrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRegistryLoginResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceRegistryLoginResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateContainerServiceRegistryLoginResponse(const CreateContainerServiceRegistryLoginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContainerServiceRegistryLoginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceRegistryLoginResponse)
    Q_DISABLE_COPY(CreateContainerServiceRegistryLoginResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
