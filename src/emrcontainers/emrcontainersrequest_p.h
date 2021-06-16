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

#ifndef QTAWS_EMRCONTAINERSREQUEST_P_H
#define QTAWS_EMRCONTAINERSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "emrcontainersrequest.h"

namespace QtAws {
namespace EMRContainers {

class EMRContainersRequest;

class QTAWS_EXPORT EMRContainersRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EMRContainersRequest::Action action; ///< EMRContainers action to be performed.
    QString apiVersion;        ///< EMRContainers API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EMRContainers request (query string) parameters. @todo?

    EMRContainersRequestPrivate(const EMRContainersRequest::Action action, EMRContainersRequest * const q);
    EMRContainersRequestPrivate(const EMRContainersRequestPrivate &other, EMRContainersRequest * const q);

    static QString toString(const EMRContainersRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EMRContainersRequest)

};

} // namespace EMRContainers
} // namespace QtAws

#endif
