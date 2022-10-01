// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONDEFINITIONREQUEST_P_H
#define QTAWS_UPDATESUBSCRIPTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updatesubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateSubscriptionDefinitionRequest;

class UpdateSubscriptionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateSubscriptionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateSubscriptionDefinitionRequest * const q);
    UpdateSubscriptionDefinitionRequestPrivate(const UpdateSubscriptionDefinitionRequestPrivate &other,
                                   UpdateSubscriptionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
