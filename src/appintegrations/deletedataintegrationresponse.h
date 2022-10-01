// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAINTEGRATIONRESPONSE_H
#define QTAWS_DELETEDATAINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "deletedataintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteDataIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT DeleteDataIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    DeleteDataIntegrationResponse(const DeleteDataIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataIntegrationResponse)
    Q_DISABLE_COPY(DeleteDataIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
