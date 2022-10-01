// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAINTEGRATIONREQUEST_P_H
#define QTAWS_CREATEDATAINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "createdataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class CreateDataIntegrationRequest;

class CreateDataIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    CreateDataIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   CreateDataIntegrationRequest * const q);
    CreateDataIntegrationRequestPrivate(const CreateDataIntegrationRequestPrivate &other,
                                   CreateDataIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
