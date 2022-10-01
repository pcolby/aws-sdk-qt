// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTSOURCESERVERREQUEST_P_H
#define QTAWS_DISCONNECTSOURCESERVERREQUEST_P_H

#include "drsrequest_p.h"
#include "disconnectsourceserverrequest.h"

namespace QtAws {
namespace Drs {

class DisconnectSourceServerRequest;

class DisconnectSourceServerRequestPrivate : public DrsRequestPrivate {

public:
    DisconnectSourceServerRequestPrivate(const DrsRequest::Action action,
                                   DisconnectSourceServerRequest * const q);
    DisconnectSourceServerRequestPrivate(const DisconnectSourceServerRequestPrivate &other,
                                   DisconnectSourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
