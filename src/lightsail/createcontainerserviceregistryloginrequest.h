// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINREQUEST_H
#define QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRegistryLoginRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceRegistryLoginRequest : public LightsailRequest {

public:
    CreateContainerServiceRegistryLoginRequest(const CreateContainerServiceRegistryLoginRequest &other);
    CreateContainerServiceRegistryLoginRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceRegistryLoginRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
