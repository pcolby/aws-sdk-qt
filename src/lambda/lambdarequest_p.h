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

#ifndef QTAWS_LAMBDAREQUEST_P_H
#define QTAWS_LAMBDAREQUEST_P_H

namespace QtAws {
namespace Lambda {

class LambdaRequest;

class LambdaRequestPrivate {

public:
    LambdaRequest::Action action; ///< Lambda action to be performed.
    QString apiVersion;        ///< Lambda API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lambda request (query string) parameters. @todo?

    LambdaRequestPrivate(const LambdaRequest::Action action, LambdaRequest * const q);
    LambdaRequestPrivate(const LambdaRequestPrivate &other, LambdaRequest * const q);

    static QString toString(const LambdaRequest::Action &action);

protected:
    LambdaRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(LambdaRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
