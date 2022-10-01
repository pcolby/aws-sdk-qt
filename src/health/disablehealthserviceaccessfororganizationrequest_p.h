// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_P_H
#define QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "disablehealthserviceaccessfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DisableHealthServiceAccessForOrganizationRequest;

class DisableHealthServiceAccessForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DisableHealthServiceAccessForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DisableHealthServiceAccessForOrganizationRequest * const q);
    DisableHealthServiceAccessForOrganizationRequestPrivate(const DisableHealthServiceAccessForOrganizationRequestPrivate &other,
                                   DisableHealthServiceAccessForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableHealthServiceAccessForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
