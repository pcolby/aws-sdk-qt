// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBGPFAILOVERTESTREQUEST_P_H
#define QTAWS_STOPBGPFAILOVERTESTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "stopbgpfailovertestrequest.h"

namespace QtAws {
namespace DirectConnect {

class StopBgpFailoverTestRequest;

class StopBgpFailoverTestRequestPrivate : public DirectConnectRequestPrivate {

public:
    StopBgpFailoverTestRequestPrivate(const DirectConnectRequest::Action action,
                                   StopBgpFailoverTestRequest * const q);
    StopBgpFailoverTestRequestPrivate(const StopBgpFailoverTestRequestPrivate &other,
                                   StopBgpFailoverTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBgpFailoverTestRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
