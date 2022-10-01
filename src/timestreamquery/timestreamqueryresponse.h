// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMQUERYRESPONSE_H
#define QTAWS_TIMESTREAMQUERYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstimestreamqueryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryResponsePrivate;

class QTAWSTIMESTREAMQUERY_EXPORT TimestreamQueryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TimestreamQueryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TimestreamQueryResponse(TimestreamQueryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TimestreamQueryResponse)
    Q_DISABLE_COPY(TimestreamQueryResponse)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
