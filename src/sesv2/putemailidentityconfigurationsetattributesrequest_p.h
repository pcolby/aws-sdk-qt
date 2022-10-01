// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putemailidentityconfigurationsetattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityConfigurationSetAttributesRequest;

class PutEmailIdentityConfigurationSetAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutEmailIdentityConfigurationSetAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutEmailIdentityConfigurationSetAttributesRequest * const q);
    PutEmailIdentityConfigurationSetAttributesRequestPrivate(const PutEmailIdentityConfigurationSetAttributesRequestPrivate &other,
                                   PutEmailIdentityConfigurationSetAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityConfigurationSetAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
