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

#ifndef QTAWS_POLLYREQUEST_P_H
#define QTAWS_POLLYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class PollyRequest;

class QTAWS_EXPORT PollyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PollyRequest::Action action; ///< Polly action to be performed.
    QString apiVersion;        ///< Polly API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Polly request (query string) parameters. @todo?

    PollyRequestPrivate(const PollyRequest::Action action, PollyRequest * const q);
    PollyRequestPrivate(const PollyRequestPrivate &other, PollyRequest * const q);

    static QString toString(const PollyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PollyRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
