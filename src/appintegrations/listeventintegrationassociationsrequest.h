// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSREQUEST_H
#define QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationAssociationsRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListEventIntegrationAssociationsRequest : public AppIntegrationsRequest {

public:
    ListEventIntegrationAssociationsRequest(const ListEventIntegrationAssociationsRequest &other);
    ListEventIntegrationAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventIntegrationAssociationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
