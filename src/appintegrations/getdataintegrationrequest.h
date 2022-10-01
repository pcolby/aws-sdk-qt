// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAINTEGRATIONREQUEST_H
#define QTAWS_GETDATAINTEGRATIONREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetDataIntegrationRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT GetDataIntegrationRequest : public AppIntegrationsRequest {

public:
    GetDataIntegrationRequest(const GetDataIntegrationRequest &other);
    GetDataIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataIntegrationRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
