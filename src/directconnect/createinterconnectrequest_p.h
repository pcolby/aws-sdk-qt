// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERCONNECTREQUEST_P_H
#define QTAWS_CREATEINTERCONNECTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateInterconnectRequest;

class CreateInterconnectRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateInterconnectRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateInterconnectRequest * const q);
    CreateInterconnectRequestPrivate(const CreateInterconnectRequestPrivate &other,
                                   CreateInterconnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
