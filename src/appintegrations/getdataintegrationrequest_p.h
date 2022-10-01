// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAINTEGRATIONREQUEST_P_H
#define QTAWS_GETDATAINTEGRATIONREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "getdataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetDataIntegrationRequest;

class GetDataIntegrationRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    GetDataIntegrationRequestPrivate(const AppIntegrationsRequest::Action action,
                                   GetDataIntegrationRequest * const q);
    GetDataIntegrationRequestPrivate(const GetDataIntegrationRequestPrivate &other,
                                   GetDataIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
