// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECURITYHUBRESPONSE_H
#define QTAWS_SECURITYHUBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssecurityhubglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SecurityHub {

class SecurityHubResponsePrivate;

class QTAWSSECURITYHUB_EXPORT SecurityHubResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SecurityHubResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SecurityHubResponse(SecurityHubResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SecurityHubResponse)
    Q_DISABLE_COPY(SecurityHubResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
