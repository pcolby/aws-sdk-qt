// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONSREQUEST_P_H
#define QTAWS_LISTDATAINTEGRATIONSREQUEST_P_H

#include "appintegrationsrequest_p.h"
#include "listdataintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationsRequest;

class ListDataIntegrationsRequestPrivate : public AppIntegrationsRequestPrivate {

public:
    ListDataIntegrationsRequestPrivate(const AppIntegrationsRequest::Action action,
                                   ListDataIntegrationsRequest * const q);
    ListDataIntegrationsRequestPrivate(const ListDataIntegrationsRequestPrivate &other,
                                   ListDataIntegrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataIntegrationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
