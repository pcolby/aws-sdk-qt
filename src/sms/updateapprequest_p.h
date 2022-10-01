// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPREQUEST_P_H
#define QTAWS_UPDATEAPPREQUEST_P_H

#include "smsrequest_p.h"
#include "updateapprequest.h"

namespace QtAws {
namespace Sms {

class UpdateAppRequest;

class UpdateAppRequestPrivate : public SmsRequestPrivate {

public:
    UpdateAppRequestPrivate(const SmsRequest::Action action,
                                   UpdateAppRequest * const q);
    UpdateAppRequestPrivate(const UpdateAppRequestPrivate &other,
                                   UpdateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
