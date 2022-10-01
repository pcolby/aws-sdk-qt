// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONOUTPUTREQUEST_P_H
#define QTAWS_GETAPPVALIDATIONOUTPUTREQUEST_P_H

#include "smsrequest_p.h"
#include "getappvalidationoutputrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationOutputRequest;

class GetAppValidationOutputRequestPrivate : public SmsRequestPrivate {

public:
    GetAppValidationOutputRequestPrivate(const SmsRequest::Action action,
                                   GetAppValidationOutputRequest * const q);
    GetAppValidationOutputRequestPrivate(const GetAppValidationOutputRequestPrivate &other,
                                   GetAppValidationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppValidationOutputRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
