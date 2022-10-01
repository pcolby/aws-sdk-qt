// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTINTEGRATIONREQUEST_P_H
#define QTAWS_DELETEEVENTINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "deleteeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteEventIntegrationRequest;

class DeleteEventIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    DeleteEventIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   DeleteEventIntegrationRequest * const q);
    DeleteEventIntegrationRequestPrivate(const DeleteEventIntegrationRequestPrivate &other,
                                   DeleteEventIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
