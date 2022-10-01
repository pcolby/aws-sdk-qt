// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_H

#include "pinpointemailresponse.h"
#include "putdedicatedipwarmupattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDedicatedIpWarmupAttributesResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutDedicatedIpWarmupAttributesResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    PutDedicatedIpWarmupAttributesResponse(const PutDedicatedIpWarmupAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDedicatedIpWarmupAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpWarmupAttributesResponse)
    Q_DISABLE_COPY(PutDedicatedIpWarmupAttributesResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
