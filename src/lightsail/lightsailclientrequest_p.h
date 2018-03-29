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

#ifndef QTAWS_LIGHTSAILCLIENTREQUEST_P_H
#define QTAWS_LIGHTSAILCLIENTREQUEST_P_H

#include "lightsail_p.h"
#include "lightsailclientrequest.h"

namespace QtAws {
namespace Lightsail {

class LightsailClientRequest;

class QTAWS_EXPORT LightsailClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LightsailClientRequest::Action action; ///< Lightsail action to be performed.
    QString apiVersion;        ///< Lightsail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lightsail request (query string) parameters. @todo?

    LightsailClientRequestPrivate(const LightsailClientRequest::Action action, LightsailClientRequest * const q);
    LightsailClientRequestPrivate(const LightsailClientRequestPrivate &other, LightsailClientRequest * const q);

    static QString toString(const LightsailClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LightsailClientRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
