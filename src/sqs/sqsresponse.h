// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSRESPONSE_H
#define QTAWS_SQSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssqsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sqs {

class SqsResponsePrivate;

class QTAWSSQS_EXPORT SqsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SqsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SqsResponse(SqsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SqsResponse)
    Q_DISABLE_COPY(SqsResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
