// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEFINITIONSREQUEST_P_H
#define QTAWS_LISTCOREDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listcoredefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionsRequest;

class ListCoreDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListCoreDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListCoreDefinitionsRequest * const q);
    ListCoreDefinitionsRequestPrivate(const ListCoreDefinitionsRequestPrivate &other,
                                   ListCoreDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoreDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
