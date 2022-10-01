// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NEPTUNERESPONSE_H
#define QTAWS_NEPTUNERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsneptuneglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Neptune {

class NeptuneResponsePrivate;

class QTAWSNEPTUNE_EXPORT NeptuneResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    NeptuneResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    NeptuneResponse(NeptuneResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NeptuneResponse)
    Q_DISABLE_COPY(NeptuneResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
