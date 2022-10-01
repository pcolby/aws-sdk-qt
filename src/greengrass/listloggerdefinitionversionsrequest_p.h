// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTLOGGERDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listloggerdefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionVersionsRequest;

class ListLoggerDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListLoggerDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListLoggerDefinitionVersionsRequest * const q);
    ListLoggerDefinitionVersionsRequestPrivate(const ListLoggerDefinitionVersionsRequestPrivate &other,
                                   ListLoggerDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLoggerDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
