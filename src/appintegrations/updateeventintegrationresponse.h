// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTINTEGRATIONRESPONSE_H
#define QTAWS_UPDATEEVENTINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "updateeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateEventIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT UpdateEventIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    UpdateEventIntegrationResponse(const UpdateEventIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventIntegrationResponse)
    Q_DISABLE_COPY(UpdateEventIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
