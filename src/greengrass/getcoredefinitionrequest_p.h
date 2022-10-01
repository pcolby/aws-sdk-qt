// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONREQUEST_P_H
#define QTAWS_GETCOREDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getcoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionRequest;

class GetCoreDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetCoreDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetCoreDefinitionRequest * const q);
    GetCoreDefinitionRequestPrivate(const GetCoreDefinitionRequestPrivate &other,
                                   GetCoreDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
