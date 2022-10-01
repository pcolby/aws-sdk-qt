// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATARESPONSE_H
#define QTAWS_REDSHIFTDATARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsredshiftdataglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace RedshiftData {

class RedshiftDataResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT RedshiftDataResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RedshiftDataResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RedshiftDataResponse(RedshiftDataResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftDataResponse)
    Q_DISABLE_COPY(RedshiftDataResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
