// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_P_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_P_H

#include "docdbrequest_p.h"
#include "removesourceidentifierfromsubscriptionrequest.h"

namespace QtAws {
namespace DocDb {

class RemoveSourceIdentifierFromSubscriptionRequest;

class RemoveSourceIdentifierFromSubscriptionRequestPrivate : public DocDbRequestPrivate {

public:
    RemoveSourceIdentifierFromSubscriptionRequestPrivate(const DocDbRequest::Action action,
                                   RemoveSourceIdentifierFromSubscriptionRequest * const q);
    RemoveSourceIdentifierFromSubscriptionRequestPrivate(const RemoveSourceIdentifierFromSubscriptionRequestPrivate &other,
                                   RemoveSourceIdentifierFromSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveSourceIdentifierFromSubscriptionRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
