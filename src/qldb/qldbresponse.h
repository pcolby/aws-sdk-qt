// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBRESPONSE_H
#define QTAWS_QLDBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsqldbglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Qldb {

class QldbResponsePrivate;

class QTAWSQLDB_EXPORT QldbResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    QldbResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    QldbResponse(QldbResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QldbResponse)
    Q_DISABLE_COPY(QldbResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
