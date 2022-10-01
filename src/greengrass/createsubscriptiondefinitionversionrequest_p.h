// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createsubscriptiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionVersionRequest;

class CreateSubscriptionDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateSubscriptionDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateSubscriptionDefinitionVersionRequest * const q);
    CreateSubscriptionDefinitionVersionRequestPrivate(const CreateSubscriptionDefinitionVersionRequestPrivate &other,
                                   CreateSubscriptionDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
