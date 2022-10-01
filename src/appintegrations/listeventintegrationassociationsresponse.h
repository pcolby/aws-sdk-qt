// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSRESPONSE_H
#define QTAWS_LISTEVENTINTEGRATIONASSOCIATIONSRESPONSE_H

#include "appintegrationsresponse.h"
#include "listeventintegrationassociationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationAssociationsResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListEventIntegrationAssociationsResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    ListEventIntegrationAssociationsResponse(const ListEventIntegrationAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventIntegrationAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListEventIntegrationAssociationsResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
