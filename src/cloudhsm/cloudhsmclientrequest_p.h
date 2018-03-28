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

#ifndef QTAWS_CLOUDHSMCLIENTREQUEST_P_H
#define QTAWS_CLOUDHSMCLIENTREQUEST_P_H

#include "cloudhsm_p.h"
#include "cloudhsmclientrequest.h"

namespace AWS {

namespace CloudHSM {

class CloudHSMClientRequest;

class QTAWS_EXPORT CloudHSMClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudHSMClientRequest::Action action; ///< CloudHSM action to be performed.
    QString apiVersion;        ///< CloudHSM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHSM request (query string) parameters. @todo?

    CloudHSMClientRequestPrivate(const CloudHSMClientRequest::Action action, CloudHSMClientRequest * const q);
    CloudHSMClientRequestPrivate(const CloudHSMClientRequestPrivate &other, CloudHSMClientRequest * const q);

    static QString toString(const CloudHSMClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHSMClientRequest)

};

} // namespace CloudHSM
} // namespace AWS

#endif
