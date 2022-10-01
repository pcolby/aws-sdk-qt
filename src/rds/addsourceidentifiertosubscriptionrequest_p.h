// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_P_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_P_H

#include "rdsrequest_p.h"
#include "addsourceidentifiertosubscriptionrequest.h"

namespace QtAws {
namespace Rds {

class AddSourceIdentifierToSubscriptionRequest;

class AddSourceIdentifierToSubscriptionRequestPrivate : public RdsRequestPrivate {

public:
    AddSourceIdentifierToSubscriptionRequestPrivate(const RdsRequest::Action action,
                                   AddSourceIdentifierToSubscriptionRequest * const q);
    AddSourceIdentifierToSubscriptionRequestPrivate(const AddSourceIdentifierToSubscriptionRequestPrivate &other,
                                   AddSourceIdentifierToSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddSourceIdentifierToSubscriptionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
