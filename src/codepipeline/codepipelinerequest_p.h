// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEPIPELINEREQUEST_P_H
#define QTAWS_CODEPIPELINEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class CodePipelineRequest;

class CodePipelineRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodePipelineRequest::Action action; ///< CodePipeline action to be performed.
    QString apiVersion;        ///< CodePipeline API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodePipeline request (query string) parameters. @todo?

    CodePipelineRequestPrivate(const CodePipelineRequest::Action action, CodePipelineRequest * const q);
    CodePipelineRequestPrivate(const CodePipelineRequestPrivate &other, CodePipelineRequest * const q);

    static QString toString(const CodePipelineRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodePipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
