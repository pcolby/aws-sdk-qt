// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCONNECTIONREQUEST_H
#define QTAWS_CONFIRMCONNECTIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmConnectionRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT ConfirmConnectionRequest : public DirectConnectRequest {

public:
    ConfirmConnectionRequest(const ConfirmConnectionRequest &other);
    ConfirmConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
