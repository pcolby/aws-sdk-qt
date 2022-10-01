// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONSREQUEST_P_H
#define QTAWS_LISTEVENTINTEGRATIONSREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "listeventintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationsRequest;

class ListEventIntegrationsRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    ListEventIntegrationsRequestPrivate(const AppIntegrationsRequest::Action action,
                                   ListEventIntegrationsRequest * const q);
    ListEventIntegrationsRequestPrivate(const ListEventIntegrationsRequestPrivate &other,
                                   ListEventIntegrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventIntegrationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
