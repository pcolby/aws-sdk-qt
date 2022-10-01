// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYRESPONSE_H
#define QTAWS_CODEDEPLOYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodedeployglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeDeploy {

class CodeDeployResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT CodeDeployResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeDeployResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeDeployResponse(CodeDeployResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeDeployResponse)
    Q_DISABLE_COPY(CodeDeployResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
