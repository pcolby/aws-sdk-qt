// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONWITHLAGRESPONSE_H
#define QTAWS_ASSOCIATECONNECTIONWITHLAGRESPONSE_H

#include "directconnectresponse.h"
#include "associateconnectionwithlagrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateConnectionWithLagResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateConnectionWithLagResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AssociateConnectionWithLagResponse(const AssociateConnectionWithLagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateConnectionWithLagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectionWithLagResponse)
    Q_DISABLE_COPY(AssociateConnectionWithLagResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
