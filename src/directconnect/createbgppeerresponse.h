// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBGPPEERRESPONSE_H
#define QTAWS_CREATEBGPPEERRESPONSE_H

#include "directconnectresponse.h"
#include "createbgppeerrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateBGPPeerResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateBGPPeerResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateBGPPeerResponse(const CreateBGPPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBGPPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBGPPeerResponse)
    Q_DISABLE_COPY(CreateBGPPeerResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
