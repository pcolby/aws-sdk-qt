// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBONUSREQUEST_P_H
#define QTAWS_SENDBONUSREQUEST_P_H

#include "mturkrequest_p.h"
#include "sendbonusrequest.h"

namespace QtAws {
namespace MTurk {

class SendBonusRequest;

class SendBonusRequestPrivate : public MTurkRequestPrivate {

public:
    SendBonusRequestPrivate(const MTurkRequest::Action action,
                                   SendBonusRequest * const q);
    SendBonusRequestPrivate(const SendBonusRequestPrivate &other,
                                   SendBonusRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendBonusRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
