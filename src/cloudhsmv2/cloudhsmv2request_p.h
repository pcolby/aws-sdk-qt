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

#ifndef QTAWS_CLOUDHSMV2REQUEST_P_H
#define QTAWS_CLOUDHSMV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHSMV2 {

class CloudHSMV2Request;

class QTAWS_EXPORT CloudHSMV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudHSMV2Request::Action action; ///< CloudHSMV2 action to be performed.
    QString apiVersion;        ///< CloudHSMV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHSMV2 request (query string) parameters. @todo?

    CloudHSMV2RequestPrivate(const CloudHSMV2Request::Action action, CloudHSMV2Request * const q);
    CloudHSMV2RequestPrivate(const CloudHSMV2RequestPrivate &other, CloudHSMV2Request * const q);

    static QString toString(const CloudHSMV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHSMV2Request)

};

} // namespace CloudHSMV2
} // namespace QtAws

#endif
