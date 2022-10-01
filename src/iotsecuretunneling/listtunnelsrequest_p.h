// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTUNNELSREQUEST_P_H
#define QTAWS_LISTTUNNELSREQUEST_P_H

#include "iotsecuretunnelingrequest_p.h"
#include "listtunnelsrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class ListTunnelsRequest;

class ListTunnelsRequestPrivate : public IoTSecureTunnelingRequestPrivate {

public:
    ListTunnelsRequestPrivate(const IoTSecureTunnelingRequest::Action action,
                                   ListTunnelsRequest * const q);
    ListTunnelsRequestPrivate(const ListTunnelsRequestPrivate &other,
                                   ListTunnelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTunnelsRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
