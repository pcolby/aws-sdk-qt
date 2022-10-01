// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEDOMAINCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updatedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDomainConfigurationRequest;

class UpdateDomainConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    UpdateDomainConfigurationRequestPrivate(const IoTRequest::Action action,
                                   UpdateDomainConfigurationRequest * const q);
    UpdateDomainConfigurationRequestPrivate(const UpdateDomainConfigurationRequestPrivate &other,
                                   UpdateDomainConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
