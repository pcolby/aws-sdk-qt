// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTBALANCEREQUEST_H
#define QTAWS_GETACCOUNTBALANCEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetAccountBalanceRequestPrivate;

class QTAWSMTURK_EXPORT GetAccountBalanceRequest : public MTurkRequest {

public:
    GetAccountBalanceRequest(const GetAccountBalanceRequest &other);
    GetAccountBalanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountBalanceRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
