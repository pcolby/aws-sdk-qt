// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECRETSMANAGERRESPONSE_H
#define QTAWS_SECRETSMANAGERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssecretsmanagerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SecretsManager {

class SecretsManagerResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT SecretsManagerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SecretsManagerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SecretsManagerResponse(SecretsManagerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SecretsManagerResponse)
    Q_DISABLE_COPY(SecretsManagerResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
