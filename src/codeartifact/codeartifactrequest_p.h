/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
