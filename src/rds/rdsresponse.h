// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSRESPONSE_H
#define QTAWS_RDSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrdsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Rds {

class RdsResponsePrivate;

class QTAWSRDS_EXPORT RdsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RdsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RdsResponse(RdsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RdsResponse)
    Q_DISABLE_COPY(RdsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
