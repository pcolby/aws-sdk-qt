// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBGPFAILOVERTESTREQUEST_P_H
#define QTAWS_STARTBGPFAILOVERTESTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "startbgpfailovertestrequest.h"

namespace QtAws {
namespace DirectConnect {

class StartBgpFailoverTestRequest;

class StartBgpFailoverTestRequestPrivate : public DirectConnectRequestPrivate {

public:
    StartBgpFailoverTestRequestPrivate(const DirectConnectRequest::Action action,
                                   StartBgpFailoverTestRequest * const q);
    StartBgpFailoverTestRequestPrivate(const StartBgpFailoverTestRequestPrivate &other,
                                   StartBgpFailoverTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBgpFailoverTestRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
