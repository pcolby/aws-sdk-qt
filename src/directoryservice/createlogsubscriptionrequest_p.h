// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATELOGSUBSCRIPTIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createlogsubscriptionrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateLogSubscriptionRequest;

class CreateLogSubscriptionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateLogSubscriptionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateLogSubscriptionRequest * const q);
    CreateLogSubscriptionRequestPrivate(const CreateLogSubscriptionRequestPrivate &other,
                                   CreateLogSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLogSubscriptionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
