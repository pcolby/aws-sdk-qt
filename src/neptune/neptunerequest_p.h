/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_NEPTUNEREQUEST_P_H
#define QTAWS_NEPTUNEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class NeptuneRequest;

class QTAWS_EXPORT NeptuneRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    NeptuneRequest::Action action; ///< Neptune action to be performed.
    QString apiVersion;        ///< Neptune API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Neptune request (query string) parameters. @todo?

    NeptuneRequestPrivate(const NeptuneRequest::Action action, NeptuneRequest * const q);
    NeptuneRequestPrivate(const NeptuneRequestPrivate &other, NeptuneRequest * const q);

    static QString toString(const NeptuneRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(NeptuneRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
