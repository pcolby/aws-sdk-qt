// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONREQUEST_H
#define QTAWS_DELETECONNECTIONREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteConnectionRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteConnectionRequest : public DirectConnectRequest {

public:
    DeleteConnectionRequest(const DeleteConnectionRequest &other);
    DeleteConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
