// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONASSOCIATIONRESPONSE_H
#define QTAWS_DELETEINTEGRATIONASSOCIATIONRESPONSE_H

#include "connectresponse.h"
#include "deleteintegrationassociationrequest.h"

namespace QtAws {
namespace Connect {

class DeleteIntegrationAssociationResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteIntegrationAssociationResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteIntegrationAssociationResponse(const DeleteIntegrationAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntegrationAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationAssociationResponse)
    Q_DISABLE_COPY(DeleteIntegrationAssociationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
