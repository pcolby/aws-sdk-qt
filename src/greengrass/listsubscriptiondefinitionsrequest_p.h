// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONSREQUEST_P_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listsubscriptiondefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionsRequest;

class ListSubscriptionDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListSubscriptionDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListSubscriptionDefinitionsRequest * const q);
    ListSubscriptionDefinitionsRequestPrivate(const ListSubscriptionDefinitionsRequestPrivate &other,
                                   ListSubscriptionDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
