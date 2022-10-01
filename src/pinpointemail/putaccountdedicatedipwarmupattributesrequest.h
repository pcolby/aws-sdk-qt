// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountDedicatedIpWarmupAttributesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutAccountDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest {

public:
    PutAccountDedicatedIpWarmupAttributesRequest(const PutAccountDedicatedIpWarmupAttributesRequest &other);
    PutAccountDedicatedIpWarmupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountDedicatedIpWarmupAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
