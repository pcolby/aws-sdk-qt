// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBGPPEERREQUEST_H
#define QTAWS_DELETEBGPPEERREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteBGPPeerRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteBGPPeerRequest : public DirectConnectRequest {

public:
    DeleteBGPPeerRequest(const DeleteBGPPeerRequest &other);
    DeleteBGPPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBGPPeerRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
