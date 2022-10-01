// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONSREQUEST_P_H
#define QTAWS_LISTTASKDEFINITIONSREQUEST_P_H

#include "ecsrequest_p.h"
#include "listtaskdefinitionsrequest.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionsRequest;

class ListTaskDefinitionsRequestPrivate : public EcsRequestPrivate {

public:
    ListTaskDefinitionsRequestPrivate(const EcsRequest::Action action,
                                   ListTaskDefinitionsRequest * const q);
    ListTaskDefinitionsRequestPrivate(const ListTaskDefinitionsRequestPrivate &other,
                                   ListTaskDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTaskDefinitionsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
