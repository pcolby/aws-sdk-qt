// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTINTEGRATIONRESPONSE_H
#define QTAWS_GETEVENTINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "geteventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetEventIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT GetEventIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    GetEventIntegrationResponse(const GetEventIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventIntegrationResponse)
    Q_DISABLE_COPY(GetEventIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
