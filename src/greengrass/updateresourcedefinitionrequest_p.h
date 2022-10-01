// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDEFINITIONREQUEST_P_H
#define QTAWS_UPDATERESOURCEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updateresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateResourceDefinitionRequest;

class UpdateResourceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateResourceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateResourceDefinitionRequest * const q);
    UpdateResourceDefinitionRequestPrivate(const UpdateResourceDefinitionRequestPrivate &other,
                                   UpdateResourceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
