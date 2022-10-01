// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3RESPONSE_H
#define QTAWS_S3RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawss3global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace S3 {

class S3ResponsePrivate;

class QTAWSS3_EXPORT S3Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    S3Response(QObject * const parent = 0);

protected:
    /// @cond internal
    S3Response(S3ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3Response)
    Q_DISABLE_COPY(S3Response)

};

} // namespace S3
} // namespace QtAws

#endif
