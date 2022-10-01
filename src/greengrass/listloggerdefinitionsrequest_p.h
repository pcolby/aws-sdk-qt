// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONSREQUEST_P_H
#define QTAWS_LISTLOGGERDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listloggerdefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionsRequest;

class ListLoggerDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListLoggerDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListLoggerDefinitionsRequest * const q);
    ListLoggerDefinitionsRequestPrivate(const ListLoggerDefinitionsRequestPrivate &other,
                                   ListLoggerDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLoggerDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
