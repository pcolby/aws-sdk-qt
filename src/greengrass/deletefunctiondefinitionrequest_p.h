// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONDEFINITIONREQUEST_P_H
#define QTAWS_DELETEFUNCTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletefunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteFunctionDefinitionRequest;

class DeleteFunctionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteFunctionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteFunctionDefinitionRequest * const q);
    DeleteFunctionDefinitionRequestPrivate(const DeleteFunctionDefinitionRequestPrivate &other,
                                   DeleteFunctionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
