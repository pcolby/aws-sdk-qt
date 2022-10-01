// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONSREQUEST_H
#define QTAWS_LISTEVENTINTEGRATIONSREQUEST_H

#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationsRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListEventIntegrationsRequest : public AppIntegrationsRequest {

public:
    ListEventIntegrationsRequest(const ListEventIntegrationsRequest &other);
    ListEventIntegrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventIntegrationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
