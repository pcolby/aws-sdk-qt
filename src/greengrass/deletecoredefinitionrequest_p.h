// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEFINITIONREQUEST_P_H
#define QTAWS_DELETECOREDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletecoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteCoreDefinitionRequest;

class DeleteCoreDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteCoreDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteCoreDefinitionRequest * const q);
    DeleteCoreDefinitionRequestPrivate(const DeleteCoreDefinitionRequestPrivate &other,
                                   DeleteCoreDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
