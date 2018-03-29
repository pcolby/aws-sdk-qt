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

#ifndef QTAWS_CLOUD9CLIENTREQUEST_P_H
#define QTAWS_CLOUD9CLIENTREQUEST_P_H

#include "cloud9_p.h"
#include "cloud9clientrequest.h"

namespace QtAws {
namespace Cloud9 {

class Cloud9ClientRequest;

class QTAWS_EXPORT Cloud9ClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Cloud9ClientRequest::Action action; ///< Cloud9 action to be performed.
    QString apiVersion;        ///< Cloud9 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Cloud9 request (query string) parameters. @todo?

    Cloud9ClientRequestPrivate(const Cloud9ClientRequest::Action action, Cloud9ClientRequest * const q);
    Cloud9ClientRequestPrivate(const Cloud9ClientRequestPrivate &other, Cloud9ClientRequest * const q);

    static QString toString(const Cloud9ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Cloud9ClientRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
