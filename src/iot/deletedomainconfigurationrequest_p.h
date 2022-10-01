// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEDOMAINCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deletedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDomainConfigurationRequest;

class DeleteDomainConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    DeleteDomainConfigurationRequestPrivate(const IoTRequest::Action action,
                                   DeleteDomainConfigurationRequest * const q);
    DeleteDomainConfigurationRequestPrivate(const DeleteDomainConfigurationRequestPrivate &other,
                                   DeleteDomainConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
