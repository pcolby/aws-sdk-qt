// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNERRESPONSE_H
#define QTAWS_SIGNERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssignerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Signer {

class SignerResponsePrivate;

class QTAWSSIGNER_EXPORT SignerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SignerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SignerResponse(SignerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignerResponse)
    Q_DISABLE_COPY(SignerResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
