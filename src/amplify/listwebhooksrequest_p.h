// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBHOOKSREQUEST_P_H
#define QTAWS_LISTWEBHOOKSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "listwebhooksrequest.h"

namespace QtAws {
namespace Amplify {

class ListWebhooksRequest;

class ListWebhooksRequestPrivate : public AmplifyRequestPrivate {

public:
    ListWebhooksRequestPrivate(const AmplifyRequest::Action action,
                                   ListWebhooksRequest * const q);
    ListWebhooksRequestPrivate(const ListWebhooksRequestPrivate &other,
                                   ListWebhooksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWebhooksRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
