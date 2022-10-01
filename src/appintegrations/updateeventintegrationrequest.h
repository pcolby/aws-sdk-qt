// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTINTEGRATIONREQUEST_H
#define QTAWS_UPDATEEVENTINTEGRATIONREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateEventIntegrationRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT UpdateEventIntegrationRequest : public AppIntegrationsRequest {

public:
    UpdateEventIntegrationRequest(const UpdateEventIntegrationRequest &other);
    UpdateEventIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
