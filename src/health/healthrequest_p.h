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

#ifndef QTAWS_HEALTHREQUEST_P_H
#define QTAWS_HEALTHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "healthrequest.h"

namespace QtAws {
namespace Health {

class HealthRequest;

class QTAWS_EXPORT HealthRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    HealthRequest::Action action; ///< Health action to be performed.
    QString apiVersion;        ///< Health API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Health request (query string) parameters. @todo?

    HealthRequestPrivate(const HealthRequest::Action action, HealthRequest * const q);
    HealthRequestPrivate(const HealthRequestPrivate &other, HealthRequest * const q);

    static QString toString(const HealthRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(HealthRequest)

};

} // namespace Health
} // namespace QtAws

#endif
