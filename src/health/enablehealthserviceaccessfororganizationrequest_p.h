// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_P_H
#define QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "enablehealthserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Health {

class EnableHealthServiceAccessForOrganizationRequest;

class EnableHealthServiceAccessForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    EnableHealthServiceAccessForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   EnableHealthServiceAccessForOrganizationRequest * const q);
    EnableHealthServiceAccessForOrganizationRequestPrivate(const EnableHealthServiceAccessForOrganizationRequestPrivate &other,
                                   EnableHealthServiceAccessForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableHealthServiceAccessForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
