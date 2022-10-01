// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSRESPONSE_H
#define QTAWS_DYNAMODBSTREAMSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdynamodbstreamsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsResponsePrivate;

class QTAWSDYNAMODBSTREAMS_EXPORT DynamoDbStreamsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DynamoDbStreamsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DynamoDbStreamsResponse(DynamoDbStreamsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DynamoDbStreamsResponse)
    Q_DISABLE_COPY(DynamoDbStreamsResponse)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
