// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KMSRESPONSE_H
#define QTAWS_KMSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskmsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Kms {

class KmsResponsePrivate;

class QTAWSKMS_EXPORT KmsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KmsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KmsResponse(KmsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KmsResponse)
    Q_DISABLE_COPY(KmsResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
