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

#ifndef QTAWS_ACMCLIENTREQUEST_P_H
#define QTAWS_ACMCLIENTREQUEST_P_H

#include "acm_p.h"
#include "acmclientrequest.h"

namespace AWS {

namespace ACM {

class AcmClientRequest;

class QTAWS_EXPORT AcmClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    AcmClientRequest::Action action; ///< ACM action to be performed.
    QString apiVersion;        ///< ACM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ACM request (query string) parameters. @todo?

    AcmClientRequestPrivate(const AcmClientRequest::Action action, AcmClientRequest * const q);
    AcmClientRequestPrivate(const AcmClientRequestPrivate &other, AcmClientRequest * const q);

    static QString toString(const AcmClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AcmClientRequest)

};

} // namespace ACM
} // namespace AWS

#endif
