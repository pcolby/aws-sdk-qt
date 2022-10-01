// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EFSRESPONSE_H
#define QTAWS_EFSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsefsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Efs {

class EfsResponsePrivate;

class QTAWSEFS_EXPORT EfsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EfsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EfsResponse(EfsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EfsResponse)
    Q_DISABLE_COPY(EfsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
