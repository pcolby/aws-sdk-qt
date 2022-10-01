// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPRUNNERRESPONSE_H
#define QTAWS_APPRUNNERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapprunnerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppRunner {

class AppRunnerResponsePrivate;

class QTAWSAPPRUNNER_EXPORT AppRunnerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppRunnerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppRunnerResponse(AppRunnerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppRunnerResponse)
    Q_DISABLE_COPY(AppRunnerResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
