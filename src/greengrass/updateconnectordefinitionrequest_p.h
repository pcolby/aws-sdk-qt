// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORDEFINITIONREQUEST_P_H
#define QTAWS_UPDATECONNECTORDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updateconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectorDefinitionRequest;

class UpdateConnectorDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateConnectorDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateConnectorDefinitionRequest * const q);
    UpdateConnectorDefinitionRequestPrivate(const UpdateConnectorDefinitionRequestPrivate &other,
                                   UpdateConnectorDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
