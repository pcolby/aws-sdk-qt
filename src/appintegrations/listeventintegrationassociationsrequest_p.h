// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "listeventintegrationassociationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationAssociationsRequest;

class ListEventIntegrationAssociationsRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    ListEventIntegrationAssociationsRequestPrivate(const AppIntegrationsRequest::Action action,
                                   ListEventIntegrationAssociationsRequest * const q);
    ListEventIntegrationAssociationsRequestPrivate(const ListEventIntegrationAssociationsRequestPrivate &other,
                                   ListEventIntegrationAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventIntegrationAssociationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
