// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_P_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_P_H

#include "neptunerequest_p.h"
#include "removesourceidentifierfromsubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class RemoveSourceIdentifierFromSubscriptionRequest;

class RemoveSourceIdentifierFromSubscriptionRequestPrivate : public NeptuneRequestPrivate {

public:
    RemoveSourceIdentifierFromSubscriptionRequestPrivate(const NeptuneRequest::Action action,
                                   RemoveSourceIdentifierFromSubscriptionRequest * const q);
    RemoveSourceIdentifierFromSubscriptionRequestPrivate(const RemoveSourceIdentifierFromSubscriptionRequestPrivate &other,
                                   RemoveSourceIdentifierFromSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveSourceIdentifierFromSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
