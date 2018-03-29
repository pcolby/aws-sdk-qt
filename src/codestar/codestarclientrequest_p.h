/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CODESTARCLIENTREQUEST_P_H
#define QTAWS_CODESTARCLIENTREQUEST_P_H

#include "codestar_p.h"
#include "codestarclientrequest.h"

namespace QtAws {
namespace CodeStar {

class CodeStarClientRequest;

class QTAWS_EXPORT CodeStarClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CodeStarClientRequest::Action action; ///< CodeStar action to be performed.
    QString apiVersion;        ///< CodeStar API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeStar request (query string) parameters. @todo?

    CodeStarClientRequestPrivate(const CodeStarClientRequest::Action action, CodeStarClientRequest * const q);
    CodeStarClientRequestPrivate(const CodeStarClientRequestPrivate &other, CodeStarClientRequest * const q);

    static QString toString(const CodeStarClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeStarClientRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
