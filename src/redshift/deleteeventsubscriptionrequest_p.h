// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteeventsubscriptionrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteEventSubscriptionRequest;

class DeleteEventSubscriptionRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteEventSubscriptionRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteEventSubscriptionRequest * const q);
    DeleteEventSubscriptionRequestPrivate(const DeleteEventSubscriptionRequestPrivate &other,
                                   DeleteEventSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventSubscriptionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
