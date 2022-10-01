// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERCONNECTREQUEST_P_H
#define QTAWS_DELETEINTERCONNECTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deleteinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteInterconnectRequest;

class DeleteInterconnectRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteInterconnectRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteInterconnectRequest * const q);
    DeleteInterconnectRequestPrivate(const DeleteInterconnectRequestPrivate &other,
                                   DeleteInterconnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
