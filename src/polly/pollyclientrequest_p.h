/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_POLLYCLIENTREQUEST_P_H
#define QTAWS_POLLYCLIENTREQUEST_P_H

#include "polly_p.h"
#include "pollyclientrequest.h"

namespace AWS {

namespace Polly {

class PollyClientRequest;

class QTAWS_EXPORT PollyClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    PollyClientRequest::Action action; ///< Polly action to be performed.
    QString apiVersion;        ///< Polly API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Polly request (query string) parameters. @todo?

    PollyClientRequestPrivate(const PollyClientRequest::Action action, PollyClientRequest * const q);
    PollyClientRequestPrivate(const PollyClientRequestPrivate &other, PollyClientRequest * const q);

    static QString toString(const PollyClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PollyClientRequest)

};

} // namespace Polly
} // namespace AWS

#endif
