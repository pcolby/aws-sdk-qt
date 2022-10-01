// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSUMMARYREQUEST_P_H
#define QTAWS_GETACCOUNTSUMMARYREQUEST_P_H

#include "iamrequest_p.h"
#include "getaccountsummaryrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountSummaryRequest;

class GetAccountSummaryRequestPrivate : public IamRequestPrivate {

public:
    GetAccountSummaryRequestPrivate(const IamRequest::Action action,
                                   GetAccountSummaryRequest * const q);
    GetAccountSummaryRequestPrivate(const GetAccountSummaryRequestPrivate &other,
                                   GetAccountSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountSummaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
