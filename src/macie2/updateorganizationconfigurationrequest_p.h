// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "updateorganizationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateOrganizationConfigurationRequest;

class UpdateOrganizationConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateOrganizationConfigurationRequestPrivate(const Macie2Request::Action action,
                                   UpdateOrganizationConfigurationRequest * const q);
    UpdateOrganizationConfigurationRequestPrivate(const UpdateOrganizationConfigurationRequestPrivate &other,
                                   UpdateOrganizationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
