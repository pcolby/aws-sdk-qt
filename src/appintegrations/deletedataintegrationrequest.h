// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAINTEGRATIONREQUEST_H
#define QTAWS_DELETEDATAINTEGRATIONREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteDataIntegrationRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT DeleteDataIntegrationRequest : public AppIntegrationsRequest {

public:
    DeleteDataIntegrationRequest(const DeleteDataIntegrationRequest &other);
    DeleteDataIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
