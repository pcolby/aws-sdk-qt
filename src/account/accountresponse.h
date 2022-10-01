// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCOUNTRESPONSE_H
#define QTAWS_ACCOUNTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsaccountglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Account {

class AccountResponsePrivate;

class QTAWSACCOUNT_EXPORT AccountResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AccountResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AccountResponse(AccountResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AccountResponse)
    Q_DISABLE_COPY(AccountResponse)

};

} // namespace Account
} // namespace QtAws

#endif
