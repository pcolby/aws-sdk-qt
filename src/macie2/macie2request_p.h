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

#ifndef QTAWS_MACIE2REQUEST_P_H
#define QTAWS_MACIE2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class Macie2Request;

class Macie2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Macie2Request::Action action; ///< Macie2 action to be performed.
    QString apiVersion;        ///< Macie2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Macie2 request (query string) parameters. @todo?

    Macie2RequestPrivate(const Macie2Request::Action action, Macie2Request * const q);
    Macie2RequestPrivate(const Macie2RequestPrivate &other, Macie2Request * const q);

    static QString toString(const Macie2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Macie2Request)

};

} // namespace Macie2
} // namespace QtAws

#endif
