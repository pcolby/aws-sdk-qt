// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONFAMILIESREQUEST_P_H
#define QTAWS_LISTTASKDEFINITIONFAMILIESREQUEST_P_H

#include "ecsrequest_p.h"
#include "listtaskdefinitionfamiliesrequest.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionFamiliesRequest;

class ListTaskDefinitionFamiliesRequestPrivate : public EcsRequestPrivate {

public:
    ListTaskDefinitionFamiliesRequestPrivate(const EcsRequest::Action action,
                                   ListTaskDefinitionFamiliesRequest * const q);
    ListTaskDefinitionFamiliesRequestPrivate(const ListTaskDefinitionFamiliesRequestPrivate &other,
                                   ListTaskDefinitionFamiliesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTaskDefinitionFamiliesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
