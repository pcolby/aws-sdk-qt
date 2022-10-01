// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBHOOKREQUEST_P_H
#define QTAWS_GETWEBHOOKREQUEST_P_H

#include "amplifyrequest_p.h"
#include "getwebhookrequest.h"

namespace QtAws {
namespace Amplify {

class GetWebhookRequest;

class GetWebhookRequestPrivate : public AmplifyRequestPrivate {

public:
    GetWebhookRequestPrivate(const AmplifyRequest::Action action,
                                   GetWebhookRequest * const q);
    GetWebhookRequestPrivate(const GetWebhookRequestPrivate &other,
                                   GetWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWebhookRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
