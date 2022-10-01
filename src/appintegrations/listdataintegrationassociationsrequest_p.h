// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTDATAINTEGRATIONASSOCIATIONSREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "listdataintegrationassociationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationAssociationsRequest;

class ListDataIntegrationAssociationsRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    ListDataIntegrationAssociationsRequestPrivate(const AppIntegrationsRequest::Action action,
                                   ListDataIntegrationAssociationsRequest * const q);
    ListDataIntegrationAssociationsRequestPrivate(const ListDataIntegrationAssociationsRequestPrivate &other,
                                   ListDataIntegrationAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataIntegrationAssociationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
