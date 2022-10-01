// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEARTIFACTREQUEST_P_H
#define QTAWS_CODEARTIFACTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactRequest;

class CodeArtifactRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeArtifactRequest::Action action; ///< CodeArtifact action to be performed.
    QString apiVersion;        ///< CodeArtifact API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeArtifact request (query string) parameters. @todo?

    CodeArtifactRequestPrivate(const CodeArtifactRequest::Action action, CodeArtifactRequest * const q);
    CodeArtifactRequestPrivate(const CodeArtifactRequestPrivate &other, CodeArtifactRequest * const q);

    static QString toString(const CodeArtifactRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeArtifactRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
