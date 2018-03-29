/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
