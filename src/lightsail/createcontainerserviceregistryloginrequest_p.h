// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINREQUEST_P_H
#define QTAWS_CREATECONTAINERSERVICEREGISTRYLOGINREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createcontainerserviceregistryloginrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRegistryLoginRequest;

class CreateContainerServiceRegistryLoginRequestPrivate : public LightsailRequestPrivate {

public:
    CreateContainerServiceRegistryLoginRequestPrivate(const LightsailRequest::Action action,
                                   CreateContainerServiceRegistryLoginRequest * const q);
    CreateContainerServiceRegistryLoginRequestPrivate(const CreateContainerServiceRegistryLoginRequestPrivate &other,
                                   CreateContainerServiceRegistryLoginRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceRegistryLoginRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
