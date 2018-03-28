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

#ifndef QTAWS_CODEDEPLOYCLIENTREQUEST_P_H
#define QTAWS_CODEDEPLOYCLIENTREQUEST_P_H

#include "codedeploy_p.h"
#include "codedeployclientrequest.h"

namespace AWS {

namespace CodeDeploy {

class CodeDeployClientRequest;

class QTAWS_EXPORT CodeDeployClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CodeDeployClientRequest::Action action; ///< CodeDeploy action to be performed.
    QString apiVersion;        ///< CodeDeploy API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeDeploy request (query string) parameters. @todo?

    CodeDeployClientRequestPrivate(const CodeDeployClientRequest::Action action, CodeDeployClientRequest * const q);
    CodeDeployClientRequestPrivate(const CodeDeployClientRequestPrivate &other, CodeDeployClientRequest * const q);

    static QString toString(const CodeDeployClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeDeployClientRequest)

};

} // namespace CodeDeploy
} // namespace AWS

#endif
