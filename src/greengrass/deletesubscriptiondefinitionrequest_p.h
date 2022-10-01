// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONDEFINITIONREQUEST_P_H
#define QTAWS_DELETESUBSCRIPTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletesubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteSubscriptionDefinitionRequest;

class DeleteSubscriptionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteSubscriptionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteSubscriptionDefinitionRequest * const q);
    DeleteSubscriptionDefinitionRequestPrivate(const DeleteSubscriptionDefinitionRequestPrivate &other,
                                   DeleteSubscriptionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
