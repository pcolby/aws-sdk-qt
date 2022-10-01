// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAINTEGRATIONRESPONSE_H
#define QTAWS_CREATEDATAINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "createdataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class CreateDataIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT CreateDataIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    CreateDataIntegrationResponse(const CreateDataIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataIntegrationResponse)
    Q_DISABLE_COPY(CreateDataIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
