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

#ifndef QTAWS_PIREQUEST_P_H
#define QTAWS_PIREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pirequest.h"

namespace QtAws {
namespace PI {

class PiRequest;

class QTAWS_EXPORT PiRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PiRequest::Action action; ///< PI action to be performed.
    QString apiVersion;        ///< PI API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PI request (query string) parameters. @todo?

    PiRequestPrivate(const PiRequest::Action action, PiRequest * const q);
    PiRequestPrivate(const PiRequestPrivate &other, PiRequest * const q);

    static QString toString(const PiRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PiRequest)

};

} // namespace PI
} // namespace QtAws

#endif
