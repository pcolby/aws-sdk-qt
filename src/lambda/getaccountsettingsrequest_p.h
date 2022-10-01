// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSREQUEST_P_H
#define QTAWS_GETACCOUNTSETTINGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "getaccountsettingsrequest.h"

namespace QtAws {
namespace Lambda {

class GetAccountSettingsRequest;

class GetAccountSettingsRequestPrivate : public LambdaRequestPrivate {

public:
    GetAccountSettingsRequestPrivate(const LambdaRequest::Action action,
                                   GetAccountSettingsRequest * const q);
    GetAccountSettingsRequestPrivate(const GetAccountSettingsRequestPrivate &other,
                                   GetAccountSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountSettingsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
