// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTRESPONSE_H
#define QTAWS_SUPPORTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssupportglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Support {

class SupportResponsePrivate;

class QTAWSSUPPORT_EXPORT SupportResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SupportResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SupportResponse(SupportResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SupportResponse)
    Q_DISABLE_COPY(SupportResponse)

};

} // namespace Support
} // namespace QtAws

#endif
