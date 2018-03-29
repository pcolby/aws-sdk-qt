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

#ifndef QTAWS_RDSREQUEST_P_H
#define QTAWS_RDSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rdsrequest.h"

namespace QtAws {
namespace RDS {

class RDSRequest;

class QTAWS_EXPORT RDSRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RDSRequest::Action action; ///< RDS action to be performed.
    QString apiVersion;        ///< RDS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RDS request (query string) parameters. @todo?

    RDSRequestPrivate(const RDSRequest::Action action, RDSRequest * const q);
    RDSRequestPrivate(const RDSRequestPrivate &other, RDSRequest * const q);

    static QString toString(const RDSRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RDSRequest)

};

} // namespace RDS
} // namespace QtAws

#endif
