// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAINTEGRATIONREQUEST_P_H
#define QTAWS_UPDATEDATAINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "updatedataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateDataIntegrationRequest;

class UpdateDataIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    UpdateDataIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   UpdateDataIntegrationRequest * const q);
    UpdateDataIntegrationRequestPrivate(const UpdateDataIntegrationRequestPrivate &other,
                                   UpdateDataIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
