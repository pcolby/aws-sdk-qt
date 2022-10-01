// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATECONNECTORDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createconnectordefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionVersionRequest;

class CreateConnectorDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateConnectorDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateConnectorDefinitionVersionRequest * const q);
    CreateConnectorDefinitionVersionRequestPrivate(const CreateConnectorDefinitionVersionRequestPrivate &other,
                                   CreateConnectorDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectorDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
