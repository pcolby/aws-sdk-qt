// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTINTEGRATIONREQUEST_H
#define QTAWS_GETEVENTINTEGRATIONREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetEventIntegrationRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT GetEventIntegrationRequest : public AppIntegrationsRequest {

public:
    GetEventIntegrationRequest(const GetEventIntegrationRequest &other);
    GetEventIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
