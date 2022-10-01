// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBGPPEERREQUEST_H
#define QTAWS_CREATEBGPPEERREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateBGPPeerRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateBGPPeerRequest : public DirectConnectRequest {

public:
    CreateBGPPeerRequest(const CreateBGPPeerRequest &other);
    CreateBGPPeerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBGPPeerRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
