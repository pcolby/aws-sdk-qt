// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FMSRESPONSE_H
#define QTAWS_FMSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfmsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Fms {

class FmsResponsePrivate;

class QTAWSFMS_EXPORT FmsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FmsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FmsResponse(FmsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FmsResponse)
    Q_DISABLE_COPY(FmsResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
