// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEPIPELINERESPONSE_H
#define QTAWS_CODEPIPELINERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscodepipelineglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CodePipeline {

class CodePipelineResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT CodePipelineResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CodePipelineResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CodePipelineResponse(CodePipelineResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodePipelineResponse)
    Q_DISABLE_COPY(CodePipelineResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
