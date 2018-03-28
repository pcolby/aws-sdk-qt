/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CODEBUILDCLIENTREQUEST_P_H
#define QTAWS_CODEBUILDCLIENTREQUEST_P_H

#include "codebuild_p.h"
#include "request.h"

namespace AWS {

namespace CodeBuild {

class CodeBuildClientRequest;

class QTAWS_EXPORT CodeBuildClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CodeBuildClientRequest::Action action; ///< CodeBuild action to be performed.
    QString apiVersion;        ///< CodeBuild API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeBuild request (query string) parameters. @todo?

    CodeBuildClientRequestPrivate(const CodeBuildClientRequest::Action action, CodeBuildClientRequest * const q);
    CodeBuildClientRequestPrivate(const RequestPrivate &other, CodeBuildClientRequest * const q);

    static QString toString(const CodeBuildClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeBuildClientRequest)

};

} // namespace CodeBuild
} // namespace AWS

#endif
