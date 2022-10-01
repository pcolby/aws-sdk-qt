// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTEDCONNECTIONREQUEST_H
#define QTAWS_ALLOCATEHOSTEDCONNECTIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateHostedConnectionRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT AllocateHostedConnectionRequest : public DirectConnectRequest {

public:
    AllocateHostedConnectionRequest(const AllocateHostedConnectionRequest &other);
    AllocateHostedConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateHostedConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
