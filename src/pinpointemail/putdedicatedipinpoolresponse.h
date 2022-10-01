// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_H
#define QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_H

#include "pinpointemailresponse.h"
#include "putdedicatedipinpoolrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDedicatedIpInPoolResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutDedicatedIpInPoolResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutDedicatedIpInPoolResponse(const PutDedicatedIpInPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDedicatedIpInPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpInPoolResponse)
    Q_DISABLE_COPY(PutDedicatedIpInPoolResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
