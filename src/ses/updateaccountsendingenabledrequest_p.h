// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSENDINGENABLEDREQUEST_P_H
#define QTAWS_UPDATEACCOUNTSENDINGENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "updateaccountsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateAccountSendingEnabledRequest;

class UpdateAccountSendingEnabledRequestPrivate : public SesRequestPrivate {

public:
    UpdateAccountSendingEnabledRequestPrivate(const SesRequest::Action action,
                                   UpdateAccountSendingEnabledRequest * const q);
    UpdateAccountSendingEnabledRequestPrivate(const UpdateAccountSendingEnabledRequestPrivate &other,
                                   UpdateAccountSendingEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
