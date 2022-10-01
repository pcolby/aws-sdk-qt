// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTSTREAMINGREQUEST_P_H
#define QTAWS_STARTCONTACTSTREAMINGREQUEST_P_H

#include "connectrequest_p.h"
#include "startcontactstreamingrequest.h"

namespace QtAws {
namespace Connect {

class StartContactStreamingRequest;

class StartContactStreamingRequestPrivate : public ConnectRequestPrivate {

public:
    StartContactStreamingRequestPrivate(const ConnectRequest::Action action,
                                   StartContactStreamingRequest * const q);
    StartContactStreamingRequestPrivate(const StartContactStreamingRequestPrivate &other,
                                   StartContactStreamingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartContactStreamingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
