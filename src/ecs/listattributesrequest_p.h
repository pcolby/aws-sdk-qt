// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTESREQUEST_P_H
#define QTAWS_LISTATTRIBUTESREQUEST_P_H

#include "ecsrequest_p.h"
#include "listattributesrequest.h"

namespace QtAws {
namespace Ecs {

class ListAttributesRequest;

class ListAttributesRequestPrivate : public EcsRequestPrivate {

public:
    ListAttributesRequestPrivate(const EcsRequest::Action action,
                                   ListAttributesRequest * const q);
    ListAttributesRequestPrivate(const ListAttributesRequestPrivate &other,
                                   ListAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
