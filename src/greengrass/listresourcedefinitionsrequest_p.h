// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONSREQUEST_P_H
#define QTAWS_LISTRESOURCEDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listresourcedefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionsRequest;

class ListResourceDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListResourceDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListResourceDefinitionsRequest * const q);
    ListResourceDefinitionsRequestPrivate(const ListResourceDefinitionsRequestPrivate &other,
                                   ListResourceDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
