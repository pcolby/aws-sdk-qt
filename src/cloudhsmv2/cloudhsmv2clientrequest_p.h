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

#ifndef QTAWS_CLOUDHSMV2CLIENTREQUEST_P_H
#define QTAWS_CLOUDHSMV2CLIENTREQUEST_P_H

#include "cloudhsmv2_p.h"
#include "request.h"

namespace AWS {

namespace CloudHSMV2 {

class CloudHSMV2ClientRequest;

class QTAWS_EXPORT CloudHSMV2ClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudHSMV2ClientRequest::Action action; ///< CloudHSMV2 action to be performed.
    QString apiVersion;        ///< CloudHSMV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHSMV2 request (query string) parameters. @todo?

    CloudHSMV2ClientRequestPrivate(const CloudHSMV2ClientRequest::Action action, CloudHSMV2ClientRequest * const q);
    CloudHSMV2ClientRequestPrivate(const RequestPrivate &other, CloudHSMV2ClientRequest * const q);

    static QString toString(const CloudHSMV2ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHSMV2ClientRequest)

};

} // namespace CloudHSMV2
} // namespace AWS

#endif
