// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONREQUEST_P_H
#define QTAWS_CREATECONNECTORDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionRequest;

class CreateConnectorDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateConnectorDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateConnectorDefinitionRequest * const q);
    CreateConnectorDefinitionRequestPrivate(const CreateConnectorDefinitionRequestPrivate &other,
                                   CreateConnectorDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
