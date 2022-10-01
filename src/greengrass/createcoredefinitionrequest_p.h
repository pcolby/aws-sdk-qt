// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONREQUEST_P_H
#define QTAWS_CREATECOREDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createcoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionRequest;

class CreateCoreDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateCoreDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateCoreDefinitionRequest * const q);
    CreateCoreDefinitionRequestPrivate(const CreateCoreDefinitionRequestPrivate &other,
                                   CreateCoreDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
