// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBGPPEERRESPONSE_H
#define QTAWS_DELETEBGPPEERRESPONSE_H

#include "directconnectresponse.h"
#include "deletebgppeerrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteBGPPeerResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteBGPPeerResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteBGPPeerResponse(const DeleteBGPPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBGPPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBGPPeerResponse)
    Q_DISABLE_COPY(DeleteBGPPeerResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
