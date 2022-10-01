// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAINTEGRATIONREQUEST_H
#define QTAWS_CREATEDATAINTEGRATIONREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class CreateDataIntegrationRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT CreateDataIntegrationRequest : public AppIntegrationsRequest {

public:
    CreateDataIntegrationRequest(const CreateDataIntegrationRequest &other);
    CreateDataIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
