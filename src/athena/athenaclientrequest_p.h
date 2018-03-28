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

#ifndef QTAWS_ATHENACLIENTREQUEST_P_H
#define QTAWS_ATHENACLIENTREQUEST_P_H

#include "athena_p.h"
#include "athenaclientrequest.h"

namespace AWS {

namespace Athena {

class AthenaClientRequest;

class QTAWS_EXPORT AthenaClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    AthenaClientRequest::Action action; ///< Athena action to be performed.
    QString apiVersion;        ///< Athena API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Athena request (query string) parameters. @todo?

    AthenaClientRequestPrivate(const AthenaClientRequest::Action action, AthenaClientRequest * const q);
    AthenaClientRequestPrivate(const AthenaClientRequestPrivate &other, AthenaClientRequest * const q);

    static QString toString(const AthenaClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AthenaClientRequest)

};

} // namespace Athena
} // namespace AWS

#endif
