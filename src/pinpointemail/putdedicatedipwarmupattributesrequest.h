// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H
#define QTAWS_PUTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutDedicatedIpWarmupAttributesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest {

public:
    PutDedicatedIpWarmupAttributesRequest(const PutDedicatedIpWarmupAttributesRequest &other);
    PutDedicatedIpWarmupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpWarmupAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
