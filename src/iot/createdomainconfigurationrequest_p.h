// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEDOMAINCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createdomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class CreateDomainConfigurationRequest;

class CreateDomainConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    CreateDomainConfigurationRequestPrivate(const IoTRequest::Action action,
                                   CreateDomainConfigurationRequest * const q);
    CreateDomainConfigurationRequestPrivate(const CreateDomainConfigurationRequestPrivate &other,
                                   CreateDomainConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
