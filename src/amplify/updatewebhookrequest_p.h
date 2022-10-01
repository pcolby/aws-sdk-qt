// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBHOOKREQUEST_P_H
#define QTAWS_UPDATEWEBHOOKREQUEST_P_H

#include "amplifyrequest_p.h"
#include "updatewebhookrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateWebhookRequest;

class UpdateWebhookRequestPrivate : public AmplifyRequestPrivate {

public:
    UpdateWebhookRequestPrivate(const AmplifyRequest::Action action,
                                   UpdateWebhookRequest * const q);
    UpdateWebhookRequestPrivate(const UpdateWebhookRequestPrivate &other,
                                   UpdateWebhookRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWebhookRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
