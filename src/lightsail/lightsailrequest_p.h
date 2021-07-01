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

#ifndef QTAWS_LIGHTSAILREQUEST_P_H
#define QTAWS_LIGHTSAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class LightsailRequest;

class LightsailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LightsailRequest::Action action; ///< Lightsail action to be performed.
    QString apiVersion;        ///< Lightsail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lightsail request (query string) parameters. @todo?

    LightsailRequestPrivate(const LightsailRequest::Action action, LightsailRequest * const q);
    LightsailRequestPrivate(const LightsailRequestPrivate &other, LightsailRequest * const q);

    static QString toString(const LightsailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LightsailRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
