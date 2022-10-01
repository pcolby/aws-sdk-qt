// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTRESPONSE_H
#define QTAWS_REDSHIFTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsredshiftglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Redshift {

class RedshiftResponsePrivate;

class QTAWSREDSHIFT_EXPORT RedshiftResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RedshiftResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RedshiftResponse(RedshiftResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftResponse)
    Q_DISABLE_COPY(RedshiftResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
