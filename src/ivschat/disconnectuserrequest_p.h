// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTUSERREQUEST_P_H
#define QTAWS_DISCONNECTUSERREQUEST_P_H

#include "ivschatrequest_p.h"
#include "disconnectuserrequest.h"

namespace QtAws {
namespace IvsChat {

class DisconnectUserRequest;

class DisconnectUserRequestPrivate : public IvsChatRequestPrivate {

public:
    DisconnectUserRequestPrivate(const IvsChatRequest::Action action,
                                   DisconnectUserRequest * const q);
    DisconnectUserRequestPrivate(const DisconnectUserRequestPrivate &other,
                                   DisconnectUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectUserRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
