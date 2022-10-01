// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTINTEGRATIONREQUEST_P_H
#define QTAWS_GETEVENTINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "geteventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetEventIntegrationRequest;

class GetEventIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    GetEventIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   GetEventIntegrationRequest * const q);
    GetEventIntegrationRequestPrivate(const GetEventIntegrationRequestPrivate &other,
                                   GetEventIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
