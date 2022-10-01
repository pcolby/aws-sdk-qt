// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAINTEGRATIONRESPONSE_H
#define QTAWS_UPDATEDATAINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "updatedataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class UpdateDataIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT UpdateDataIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    UpdateDataIntegrationResponse(const UpdateDataIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataIntegrationResponse)
    Q_DISABLE_COPY(UpdateDataIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
