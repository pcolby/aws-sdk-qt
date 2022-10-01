// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_P_H

#include "detectiverequest_p.h"
#include "updateorganizationconfigurationrequest.h"

namespace QtAws {
namespace Detective {

class UpdateOrganizationConfigurationRequest;

class UpdateOrganizationConfigurationRequestPrivate : public DetectiveRequestPrivate {

public:
    UpdateOrganizationConfigurationRequestPrivate(const DetectiveRequest::Action action,
                                   UpdateOrganizationConfigurationRequest * const q);
    UpdateOrganizationConfigurationRequestPrivate(const UpdateOrganizationConfigurationRequestPrivate &other,
                                   UpdateOrganizationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationConfigurationRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
