// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETCOREDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getcoredefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionVersionRequest;

class GetCoreDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetCoreDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetCoreDefinitionVersionRequest * const q);
    GetCoreDefinitionVersionRequestPrivate(const GetCoreDefinitionVersionRequestPrivate &other,
                                   GetCoreDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
