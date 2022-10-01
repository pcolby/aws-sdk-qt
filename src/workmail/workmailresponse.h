// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILRESPONSE_H
#define QTAWS_WORKMAILRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworkmailglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkMail {

class WorkMailResponsePrivate;

class QTAWSWORKMAIL_EXPORT WorkMailResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkMailResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkMailResponse(WorkMailResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkMailResponse)
    Q_DISABLE_COPY(WorkMailResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
