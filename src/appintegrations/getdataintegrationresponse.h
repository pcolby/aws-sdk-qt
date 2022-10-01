// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAINTEGRATIONRESPONSE_H
#define QTAWS_GETDATAINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "getdataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class GetDataIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT GetDataIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    GetDataIntegrationResponse(const GetDataIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataIntegrationResponse)
    Q_DISABLE_COPY(GetDataIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
