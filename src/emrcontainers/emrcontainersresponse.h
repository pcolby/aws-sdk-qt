// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCONTAINERSRESPONSE_H
#define QTAWS_EMRCONTAINERSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsemrcontainersglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT EmrcontainersResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EmrcontainersResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EmrcontainersResponse(EmrcontainersResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrcontainersResponse)
    Q_DISABLE_COPY(EmrcontainersResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
