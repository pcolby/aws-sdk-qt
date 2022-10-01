// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETCONNECTORDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getconnectordefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionVersionRequest;

class GetConnectorDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetConnectorDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetConnectorDefinitionVersionRequest * const q);
    GetConnectorDefinitionVersionRequestPrivate(const GetConnectorDefinitionVersionRequestPrivate &other,
                                   GetConnectorDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectorDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
