// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONREQUEST_P_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createsubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionRequest;

class CreateSubscriptionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateSubscriptionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateSubscriptionDefinitionRequest * const q);
    CreateSubscriptionDefinitionRequestPrivate(const CreateSubscriptionDefinitionRequestPrivate &other,
                                   CreateSubscriptionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
