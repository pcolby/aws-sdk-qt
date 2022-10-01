// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTESREQUEST_P_H
#define QTAWS_DELETEATTRIBUTESREQUEST_P_H

#include "ecsrequest_p.h"
#include "deleteattributesrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteAttributesRequest;

class DeleteAttributesRequestPrivate : public EcsRequestPrivate {

public:
    DeleteAttributesRequestPrivate(const EcsRequest::Action action,
                                   DeleteAttributesRequest * const q);
    DeleteAttributesRequestPrivate(const DeleteAttributesRequestPrivate &other,
                                   DeleteAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
