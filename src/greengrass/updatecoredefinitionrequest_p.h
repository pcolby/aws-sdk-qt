// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOREDEFINITIONREQUEST_P_H
#define QTAWS_UPDATECOREDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updatecoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateCoreDefinitionRequest;

class UpdateCoreDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateCoreDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateCoreDefinitionRequest * const q);
    UpdateCoreDefinitionRequestPrivate(const UpdateCoreDefinitionRequestPrivate &other,
                                   UpdateCoreDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
