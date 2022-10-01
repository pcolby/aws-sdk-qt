// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHOSTEDCONNECTIONREQUEST_H
#define QTAWS_ASSOCIATEHOSTEDCONNECTIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateHostedConnectionRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateHostedConnectionRequest : public DirectConnectRequest {

public:
    AssociateHostedConnectionRequest(const AssociateHostedConnectionRequest &other);
    AssociateHostedConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateHostedConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
