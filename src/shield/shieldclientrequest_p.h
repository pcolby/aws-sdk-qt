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

#ifndef QTAWS_SHIELDCLIENTREQUEST_P_H
#define QTAWS_SHIELDCLIENTREQUEST_P_H

#include "shield_p.h"
#include "shieldclientrequest.h"

namespace AWS {

namespace Shield {

class ShieldClientRequest;

class QTAWS_EXPORT ShieldClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ShieldClientRequest::Action action; ///< Shield action to be performed.
    QString apiVersion;        ///< Shield API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Shield request (query string) parameters. @todo?

    ShieldClientRequestPrivate(const ShieldClientRequest::Action action, ShieldClientRequest * const q);
    ShieldClientRequestPrivate(const ShieldClientRequestPrivate &other, ShieldClientRequest * const q);

    static QString toString(const ShieldClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ShieldClientRequest)

};

} // namespace Shield
} // namespace AWS

#endif
