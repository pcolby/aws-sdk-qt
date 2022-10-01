// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONREQUEST_P_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getsubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionRequest;

class GetSubscriptionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetSubscriptionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetSubscriptionDefinitionRequest * const q);
    GetSubscriptionDefinitionRequestPrivate(const GetSubscriptionDefinitionRequestPrivate &other,
                                   GetSubscriptionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
