// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECODEAUTHORIZATIONMESSAGEREQUEST_P_H
#define QTAWS_DECODEAUTHORIZATIONMESSAGEREQUEST_P_H

#include "stsrequest_p.h"
#include "decodeauthorizationmessagerequest.h"

namespace QtAws {
namespace Sts {

class DecodeAuthorizationMessageRequest;

class DecodeAuthorizationMessageRequestPrivate : public StsRequestPrivate {

public:
    DecodeAuthorizationMessageRequestPrivate(const StsRequest::Action action,
                                   DecodeAuthorizationMessageRequest * const q);
    DecodeAuthorizationMessageRequestPrivate(const DecodeAuthorizationMessageRequestPrivate &other,
                                   DecodeAuthorizationMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecodeAuthorizationMessageRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
