// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCEREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteappinstancerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceRequest;

class DeleteAppInstanceRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteAppInstanceRequestPrivate(const ChimeRequest::Action action,
                                   DeleteAppInstanceRequest * const q);
    DeleteAppInstanceRequestPrivate(const DeleteAppInstanceRequestPrivate &other,
                                   DeleteAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
