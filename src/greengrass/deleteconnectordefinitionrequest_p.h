// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORDEFINITIONREQUEST_P_H
#define QTAWS_DELETECONNECTORDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deleteconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteConnectorDefinitionRequest;

class DeleteConnectorDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteConnectorDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteConnectorDefinitionRequest * const q);
    DeleteConnectorDefinitionRequestPrivate(const DeleteConnectorDefinitionRequestPrivate &other,
                                   DeleteConnectorDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
