// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRESPONSE_H
#define SQSRESPONSE_H

#include "core/awsabstractresponse.h"
#include "sqserror.h"

#include <QVariantMap>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

class SqsResponsePrivate;

class QTAWS_EXPORT SqsResponse : public AwsAbstractResponse {
    Q_OBJECT

public:
    SqsResponse(QObject * const parent = 0);

    virtual QString errorString() const;
    virtual bool hasError() const;
    virtual bool isValid() const;

    QString requestId() const;

    SqsErrorList serviceErrors() const;

protected:
    /// @cond internal
    SqsResponse(SqsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsResponse)
    Q_DISABLE_COPY(SqsResponse)
    friend class TestSqsResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
