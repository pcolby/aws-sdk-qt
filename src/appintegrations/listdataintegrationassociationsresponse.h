// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONASSOCIATIONSRESPONSE_H
#define QTAWS_LISTDATAINTEGRATIONASSOCIATIONSRESPONSE_H

#include "appintegrationsresponse.h"
#include "listdataintegrationassociationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationAssociationsResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListDataIntegrationAssociationsResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    ListDataIntegrationAssociationsResponse(const ListDataIntegrationAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataIntegrationAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataIntegrationAssociationsResponse)
    Q_DISABLE_COPY(ListDataIntegrationAssociationsResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
