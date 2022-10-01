// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHLAKERESPONSE_H
#define QTAWS_HEALTHLAKERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawshealthlakeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace HealthLake {

class HealthLakeResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT HealthLakeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    HealthLakeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    HealthLakeResponse(HealthLakeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HealthLakeResponse)
    Q_DISABLE_COPY(HealthLakeResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
