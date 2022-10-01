// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKSETREQUEST_P_H
#define QTAWS_DELETETASKSETREQUEST_P_H

#include "ecsrequest_p.h"
#include "deletetasksetrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteTaskSetRequest;

class DeleteTaskSetRequestPrivate : public EcsRequestPrivate {

public:
    DeleteTaskSetRequestPrivate(const EcsRequest::Action action,
                                   DeleteTaskSetRequest * const q);
    DeleteTaskSetRequestPrivate(const DeleteTaskSetRequestPrivate &other,
                                   DeleteTaskSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
