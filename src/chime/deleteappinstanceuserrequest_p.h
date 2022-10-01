// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceUserRequest;

class DeleteAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   DeleteAppInstanceUserRequest * const q);
    DeleteAppInstanceUserRequestPrivate(const DeleteAppInstanceUserRequestPrivate &other,
                                   DeleteAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
