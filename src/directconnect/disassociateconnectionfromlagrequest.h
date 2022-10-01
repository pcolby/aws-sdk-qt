// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONFROMLAGREQUEST_H
#define QTAWS_DISASSOCIATECONNECTIONFROMLAGREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateConnectionFromLagRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DisassociateConnectionFromLagRequest : public DirectConnectRequest {

public:
    DisassociateConnectionFromLagRequest(const DisassociateConnectionFromLagRequest &other);
    DisassociateConnectionFromLagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectionFromLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
