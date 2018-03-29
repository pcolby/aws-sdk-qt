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

#ifndef QTAWS_RDSCLIENTREQUEST_P_H
#define QTAWS_RDSCLIENTREQUEST_P_H

#include "rds_p.h"
#include "rdsclientrequest.h"

namespace QtAws {
namespace RDS {

class RdsClientRequest;

class QTAWS_EXPORT RdsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    RdsClientRequest::Action action; ///< RDS action to be performed.
    QString apiVersion;        ///< RDS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RDS request (query string) parameters. @todo?

    RdsClientRequestPrivate(const RdsClientRequest::Action action, RdsClientRequest * const q);
    RdsClientRequestPrivate(const RdsClientRequestPrivate &other, RdsClientRequest * const q);

    static QString toString(const RdsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RdsClientRequest)

};

} // namespace RDS
} // namespace QtAws

#endif
