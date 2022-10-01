// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PEERVPCRESPONSE_H
#define QTAWS_PEERVPCRESPONSE_H

#include "lightsailresponse.h"
#include "peervpcrequest.h"

namespace QtAws {
namespace Lightsail {

class PeerVpcResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT PeerVpcResponse : public LightsailResponse {
    Q_OBJECT

public:
    PeerVpcResponse(const PeerVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PeerVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PeerVpcResponse)
    Q_DISABLE_COPY(PeerVpcResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
