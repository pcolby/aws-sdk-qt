// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEBUILDREQUEST_P_H
#define QTAWS_CODEBUILDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class CodeBuildRequest;

class CodeBuildRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeBuildRequest::Action action; ///< CodeBuild action to be performed.
    QString apiVersion;        ///< CodeBuild API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeBuild request (query string) parameters. @todo?

    CodeBuildRequestPrivate(const CodeBuildRequest::Action action, CodeBuildRequest * const q);
    CodeBuildRequestPrivate(const CodeBuildRequestPrivate &other, CodeBuildRequest * const q);

    static QString toString(const CodeBuildRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
