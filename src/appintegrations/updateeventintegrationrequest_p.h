// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTINTEGRATIONREQUEST_P_H
#define QTAWS_UPDATEEVENTINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "updateeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateEventIntegrationRequest;

class UpdateEventIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    UpdateEventIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   UpdateEventIntegrationRequest * const q);
    UpdateEventIntegrationRequestPrivate(const UpdateEventIntegrationRequestPrivate &other,
                                   UpdateEventIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
