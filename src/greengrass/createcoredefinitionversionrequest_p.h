// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATECOREDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createcoredefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionVersionRequest;

class CreateCoreDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateCoreDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateCoreDefinitionVersionRequest * const q);
    CreateCoreDefinitionVersionRequestPrivate(const CreateCoreDefinitionVersionRequestPrivate &other,
                                   CreateCoreDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCoreDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
