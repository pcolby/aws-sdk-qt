// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTINTEGRATIONSRESPONSE_H
#define QTAWS_LISTEVENTINTEGRATIONSRESPONSE_H

#include "appintegrationsresponse.h"
#include "listeventintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListEventIntegrationsResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListEventIntegrationsResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    ListEventIntegrationsResponse(const ListEventIntegrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventIntegrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventIntegrationsResponse)
    Q_DISABLE_COPY(ListEventIntegrationsResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
