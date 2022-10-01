// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONREQUEST_P_H
#define QTAWS_GETRESOURCEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionRequest;

class GetResourceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetResourceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetResourceDefinitionRequest * const q);
    GetResourceDefinitionRequestPrivate(const GetResourceDefinitionRequestPrivate &other,
                                   GetResourceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
