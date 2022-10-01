// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETRESOURCEDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getresourcedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionVersionRequest;

class GetResourceDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetResourceDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetResourceDefinitionVersionRequest * const q);
    GetResourceDefinitionVersionRequestPrivate(const GetResourceDefinitionVersionRequestPrivate &other,
                                   GetResourceDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
