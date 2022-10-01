// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONASSOCIATIONRESPONSE_H
#define QTAWS_CREATEINTEGRATIONASSOCIATIONRESPONSE_H

#include "connectresponse.h"
#include "createintegrationassociationrequest.h"

namespace QtAws {
namespace Connect {

class CreateIntegrationAssociationResponsePrivate;

class QTAWSCONNECT_EXPORT CreateIntegrationAssociationResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateIntegrationAssociationResponse(const CreateIntegrationAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntegrationAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationAssociationResponse)
    Q_DISABLE_COPY(CreateIntegrationAssociationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
