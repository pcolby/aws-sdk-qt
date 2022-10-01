// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEBUILDRESPONSE_H
#define QTAWS_CODEBUILDRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodebuildglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeBuild {

class CodeBuildResponsePrivate;

class QTAWSCODEBUILD_EXPORT CodeBuildResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeBuildResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeBuildResponse(CodeBuildResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeBuildResponse)
    Q_DISABLE_COPY(CodeBuildResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
