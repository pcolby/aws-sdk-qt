// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONREQUEST_P_H
#define QTAWS_GETCONNECTORDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getconnectordefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionRequest;

class GetConnectorDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetConnectorDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetConnectorDefinitionRequest * const q);
    GetConnectorDefinitionRequestPrivate(const GetConnectorDefinitionRequestPrivate &other,
                                   GetConnectorDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
