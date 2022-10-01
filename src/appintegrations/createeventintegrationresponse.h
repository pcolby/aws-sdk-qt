// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTINTEGRATIONRESPONSE_H
#define QTAWS_CREATEEVENTINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "createeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class CreateEventIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT CreateEventIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    CreateEventIntegrationResponse(const CreateEventIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventIntegrationResponse)
    Q_DISABLE_COPY(CreateEventIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
