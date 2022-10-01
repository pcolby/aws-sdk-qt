// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDEFINITIONREQUEST_P_H
#define QTAWS_DELETERESOURCEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deleteresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteResourceDefinitionRequest;

class DeleteResourceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteResourceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteResourceDefinitionRequest * const q);
    DeleteResourceDefinitionRequestPrivate(const DeleteResourceDefinitionRequestPrivate &other,
                                   DeleteResourceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
