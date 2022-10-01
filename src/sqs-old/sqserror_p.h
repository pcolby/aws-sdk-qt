// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSERROR_P_H
#define SQSERROR_P_H

#include "sqserror.h"

namespace QtAws {
namespace SqsOld {

class SqsErrorPrivate {

public:
    SqsError::ErrorCode code; ///< SQS error code.
    QVariantMap detail;       ///< SQS error detail.
    QString message;          ///< SQS error message.
    QString rawCode;          ///< Raw SQS error code.
    QString rawType;          ///< Raw SQS error type.
    SqsError::ErrorType type; ///< SQS error type.

    SqsErrorPrivate(SqsError * const q);
    SqsErrorPrivate(const SqsErrorPrivate * const other, SqsError * const q);

    virtual ~SqsErrorPrivate();

    void parse(QXmlStreamReader &xml);

    static SqsError::ErrorCode codeFromString(const QString &code);
    static SqsError::ErrorType typeFromString(const QString &type);

private:
    Q_DECLARE_PUBLIC(SqsError)
    Q_DISABLE_COPY(SqsErrorPrivate)
    SqsError * const q_ptr; ///< Internal q-pointer.

};

} // namespace SqsOld
} // namespace QtAws

#endif
