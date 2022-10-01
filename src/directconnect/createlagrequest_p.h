// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAGREQUEST_P_H
#define QTAWS_CREATELAGREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createlagrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateLagRequest;

class CreateLagRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateLagRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateLagRequest * const q);
    CreateLagRequestPrivate(const CreateLagRequestPrivate &other,
                                   CreateLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
