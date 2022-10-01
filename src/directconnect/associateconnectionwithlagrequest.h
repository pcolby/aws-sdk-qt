// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_H
#define QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateConnectionWithLagRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateConnectionWithLagRequest : public DirectConnectRequest {

public:
    AssociateConnectionWithLagRequest(const AssociateConnectionWithLagRequest &other);
    AssociateConnectionWithLagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectionWithLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
