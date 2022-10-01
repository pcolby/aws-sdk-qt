// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEREQUEST_P_H
#define QTAWS_DELETEINSTANCEREQUEST_P_H

#include "connectrequest_p.h"
#include "deleteinstancerequest.h"

namespace QtAws {
namespace Connect {

class DeleteInstanceRequest;

class DeleteInstanceRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteInstanceRequestPrivate(const ConnectRequest::Action action,
                                   DeleteInstanceRequest * const q);
    DeleteInstanceRequestPrivate(const DeleteInstanceRequestPrivate &other,
                                   DeleteInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
