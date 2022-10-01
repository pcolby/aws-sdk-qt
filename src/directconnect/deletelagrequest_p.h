// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAGREQUEST_P_H
#define QTAWS_DELETELAGREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletelagrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteLagRequest;

class DeleteLagRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteLagRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteLagRequest * const q);
    DeleteLagRequestPrivate(const DeleteLagRequestPrivate &other,
                                   DeleteLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
