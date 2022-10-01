// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEARTIFACTRESPONSE_H
#define QTAWS_CODEARTIFACTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodeartifactglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT CodeArtifactResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodeArtifactResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodeArtifactResponse(CodeArtifactResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeArtifactResponse)
    Q_DISABLE_COPY(CodeArtifactResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
