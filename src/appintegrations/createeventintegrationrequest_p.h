// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTINTEGRATIONREQUEST_P_H
#define QTAWS_CREATEEVENTINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "createeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class CreateEventIntegrationRequest;

class CreateEventIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    CreateEventIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   CreateEventIntegrationRequest * const q);
    CreateEventIntegrationRequestPrivate(const CreateEventIntegrationRequestPrivate &other,
                                   CreateEventIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
