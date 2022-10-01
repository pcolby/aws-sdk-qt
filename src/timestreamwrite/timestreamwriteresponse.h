// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITERESPONSE_H
#define QTAWS_TIMESTREAMWRITERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstimestreamwriteglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT TimestreamWriteResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TimestreamWriteResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TimestreamWriteResponse(TimestreamWriteResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TimestreamWriteResponse)
    Q_DISABLE_COPY(TimestreamWriteResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
