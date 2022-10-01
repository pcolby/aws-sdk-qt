// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTSTREAMINGREQUEST_P_H
#define QTAWS_STOPCONTACTSTREAMINGREQUEST_P_H

#include "connectrequest_p.h"
#include "stopcontactstreamingrequest.h"

namespace QtAws {
namespace Connect {

class StopContactStreamingRequest;

class StopContactStreamingRequestPrivate : public ConnectRequestPrivate {

public:
    StopContactStreamingRequestPrivate(const ConnectRequest::Action action,
                                   StopContactStreamingRequest * const q);
    StopContactStreamingRequestPrivate(const StopContactStreamingRequestPrivate &other,
                                   StopContactStreamingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopContactStreamingRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
