// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINRESPONSE_H
#define QTAWS_RBINRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrbinglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Rbin {

class RbinResponsePrivate;

class QTAWSRBIN_EXPORT RbinResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RbinResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RbinResponse(RbinResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RbinResponse)
    Q_DISABLE_COPY(RbinResponse)

};

} // namespace Rbin
} // namespace QtAws

#endif
