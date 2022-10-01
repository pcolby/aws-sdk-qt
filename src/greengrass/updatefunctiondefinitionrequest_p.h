// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONDEFINITIONREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updatefunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateFunctionDefinitionRequest;

class UpdateFunctionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateFunctionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateFunctionDefinitionRequest * const q);
    UpdateFunctionDefinitionRequestPrivate(const UpdateFunctionDefinitionRequestPrivate &other,
                                   UpdateFunctionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
