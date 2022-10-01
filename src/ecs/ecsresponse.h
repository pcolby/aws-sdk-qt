// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECSRESPONSE_H
#define QTAWS_ECSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsecsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ecs {

class EcsResponsePrivate;

class QTAWSECS_EXPORT EcsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EcsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EcsResponse(EcsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcsResponse)
    Q_DISABLE_COPY(EcsResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
