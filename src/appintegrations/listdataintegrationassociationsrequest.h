// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONASSOCIATIONSREQUEST_H
#define QTAWS_LISTDATAINTEGRATIONASSOCIATIONSREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationAssociationsRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListDataIntegrationAssociationsRequest : public AppIntegrationsRequest {

public:
    ListDataIntegrationAssociationsRequest(const ListDataIntegrationAssociationsRequest &other);
    ListDataIntegrationAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataIntegrationAssociationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
