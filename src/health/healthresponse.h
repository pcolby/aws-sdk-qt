// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHRESPONSE_H
#define QTAWS_HEALTHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawshealthglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Health {

class HealthResponsePrivate;

class QTAWSHEALTH_EXPORT HealthResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    HealthResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    HealthResponse(HealthResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HealthResponse)
    Q_DISABLE_COPY(HealthResponse)

};

} // namespace Health
} // namespace QtAws

#endif
