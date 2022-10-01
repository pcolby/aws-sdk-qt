// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETELOGSUBSCRIPTIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deletelogsubscriptionrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteLogSubscriptionRequest;

class DeleteLogSubscriptionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeleteLogSubscriptionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeleteLogSubscriptionRequest * const q);
    DeleteLogSubscriptionRequestPrivate(const DeleteLogSubscriptionRequestPrivate &other,
                                   DeleteLogSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLogSubscriptionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
