// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAINTEGRATIONREQUEST_P_H
#define QTAWS_DELETEDATAINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "deletedataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteDataIntegrationRequest;

class DeleteDataIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    DeleteDataIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   DeleteDataIntegrationRequest * const q);
    DeleteDataIntegrationRequestPrivate(const DeleteDataIntegrationRequestPrivate &other,
                                   DeleteDataIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
