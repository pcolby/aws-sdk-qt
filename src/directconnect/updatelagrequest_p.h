// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAGREQUEST_P_H
#define QTAWS_UPDATELAGREQUEST_P_H

#include "directconnectrequest_p.h"
#include "updatelagrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateLagRequest;

class UpdateLagRequestPrivate : public DirectConnectRequestPrivate {

public:
    UpdateLagRequestPrivate(const DirectConnectRequest::Action action,
                                   UpdateLagRequest * const q);
    UpdateLagRequestPrivate(const UpdateLagRequestPrivate &other,
                                   UpdateLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
