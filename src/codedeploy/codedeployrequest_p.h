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

#ifndef QTAWS_CODEDEPLOYREQUEST_P_H
#define QTAWS_CODEDEPLOYREQUEST_P_H

namespace QtAws {
namespace CodeDeploy {

class CodeDeployRequest;

class CodeDeployRequestPrivate {

public:
    CodeDeployRequest::Action action; ///< CodeDeploy action to be performed.
    QString apiVersion;        ///< CodeDeploy API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeDeploy request (query string) parameters. @todo?

    CodeDeployRequestPrivate(const CodeDeployRequest::Action action, CodeDeployRequest * const q);
    CodeDeployRequestPrivate(const CodeDeployRequestPrivate &other, CodeDeployRequest * const q);

    static QString toString(const CodeDeployRequest::Action &action);

protected:
    CodeDeployRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(CodeDeployRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
