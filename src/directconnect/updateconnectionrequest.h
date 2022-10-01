// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONREQUEST_H
#define QTAWS_UPDATECONNECTIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateConnectionRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateConnectionRequest : public DirectConnectRequest {

public:
    UpdateConnectionRequest(const UpdateConnectionRequest &other);
    UpdateConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
