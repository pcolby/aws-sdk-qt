/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_CLOUDHSMREQUEST_P_H
#define QTAWS_CLOUDHSMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CloudHsmRequest;

class CloudHsmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudHsmRequest::Action action; ///< CloudHsm action to be performed.
    QString apiVersion;        ///< CloudHsm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHsm request (query string) parameters. @todo?

    CloudHsmRequestPrivate(const CloudHsmRequest::Action action, CloudHsmRequest * const q);
    CloudHsmRequestPrivate(const CloudHsmRequestPrivate &other, CloudHsmRequest * const q);

    static QString toString(const CloudHsmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
