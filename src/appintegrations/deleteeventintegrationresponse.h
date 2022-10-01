// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTINTEGRATIONRESPONSE_H
#define QTAWS_DELETEEVENTINTEGRATIONRESPONSE_H

#include "appintegrationsresponse.h"
#include "deleteeventintegrationrequest.h"

namespace QtAws {
namespace AppIntegrations {

class DeleteEventIntegrationResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT DeleteEventIntegrationResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    DeleteEventIntegrationResponse(const DeleteEventIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventIntegrationResponse)
    Q_DISABLE_COPY(DeleteEventIntegrationResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
