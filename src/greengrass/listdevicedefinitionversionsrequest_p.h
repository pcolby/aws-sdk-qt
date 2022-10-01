// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTDEVICEDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listdevicedefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionVersionsRequest;

class ListDeviceDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListDeviceDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListDeviceDefinitionVersionsRequest * const q);
    ListDeviceDefinitionVersionsRequestPrivate(const ListDeviceDefinitionVersionsRequestPrivate &other,
                                   ListDeviceDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
