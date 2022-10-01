// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getsubscriptiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionVersionRequest;

class GetSubscriptionDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetSubscriptionDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetSubscriptionDefinitionVersionRequest * const q);
    GetSubscriptionDefinitionVersionRequestPrivate(const GetSubscriptionDefinitionVersionRequestPrivate &other,
                                   GetSubscriptionDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
